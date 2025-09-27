# chatbot

{% tabs %}
{% tab title="JavaScript" %}
```javascript
<!DOCTYPE html>
<html lang="tr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>AnythingLLM API Widget</title>
    <style>
        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
        }
        
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans-serif;
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            min-height: 100vh;
            padding: 20px;
        }
        
        .container {
            max-width: 800px;
            margin: 0 auto;
            background: rgba(255, 255, 255, 0.95);
            backdrop-filter: blur(10px);
            border-radius: 20px;
            box-shadow: 0 20px 40px rgba(0, 0, 0, 0.1);
            overflow: hidden;
        }
        
        .header {
            background: linear-gradient(135deg, #4f46e5, #7c3aed);
            color: white;
            padding: 30px;
            text-align: center;
        }
        
        .header h1 {
            font-size: 2.5rem;
            font-weight: 700;
            margin-bottom: 10px;
        }
        
        .header p {
            opacity: 0.9;
            font-size: 1.1rem;
        }
        
        .content {
            padding: 30px;
        }
        
        .input-group {
            margin-bottom: 20px;
        }
        
        .input-group label {
            display: block;
            margin-bottom: 8px;
            font-weight: 600;
            color: #374151;
        }
        
        .input-group input, .input-group textarea, .input-group select {
            width: 100%;
            padding: 12px 16px;
            border: 2px solid #e5e7eb;
            border-radius: 12px;
            font-size: 16px;
            transition: all 0.3s ease;
            background: white;
        }
        
        .input-group input:focus, .input-group textarea:focus, .input-group select:focus {
            outline: none;
            border-color: #4f46e5;
            box-shadow: 0 0 0 3px rgba(79, 70, 229, 0.1);
        }
        
        .input-group textarea {
            resize: vertical;
            min-height: 100px;
        }
        
        .btn-container {
            text-align: center;
            margin: 30px 0;
        }
        
        .send-btn {
            background: linear-gradient(135deg, #4f46e5, #7c3aed);
            color: white;
            border: none;
            padding: 15px 40px;
            border-radius: 50px;
            font-size: 18px;
            font-weight: 600;
            cursor: pointer;
            transition: all 0.3s ease;
            box-shadow: 0 8px 25px rgba(79, 70, 229, 0.3);
        }
        
        .send-btn:hover {
            transform: translateY(-2px);
            box-shadow: 0 12px 35px rgba(79, 70, 229, 0.4);
        }
        
        .send-btn:active {
            transform: translateY(0);
        }
        
        .send-btn:disabled {
            opacity: 0.6;
            cursor: not-allowed;
            transform: none;
        }
        
        .loading {
            display: none;
            text-align: center;
            padding: 20px;
        }
        
        .spinner {
            display: inline-block;
            width: 40px;
            height: 40px;
            border: 4px solid #f3f4f6;
            border-top: 4px solid #4f46e5;
            border-radius: 50%;
            animation: spin 1s linear infinite;
        }
        
        @keyframes spin {
            0% { transform: rotate(0deg); }
            100% { transform: rotate(360deg); }
        }
        
        .response-container {
            margin-top: 30px;
            padding: 25px;
            background: #f8fafc;
            border-radius: 16px;
            border-left: 4px solid #4f46e5;
            display: none;
        }
        
        .response-header {
            font-weight: 600;
            color: #374151;
            margin-bottom: 15px;
            font-size: 18px;
        }
        
        .response-content {
            background: white;
            padding: 20px;
            border-radius: 12px;
            white-space: pre-wrap;
            font-family: 'Monaco', 'Menlo', monospace;
            font-size: 14px;
            line-height: 1.6;
            border: 1px solid #e5e7eb;
            max-height: 400px;
            overflow-y: auto;
        }
        
        .error {
            background: #fef2f2;
            color: #dc2626;
            border-left-color: #dc2626;
        }
        
        .error .response-content {
            background: #fff5f5;
            border-color: #fecaca;
        }
        
        .config-section {
            background: #f1f5f9;
            padding: 20px;
            border-radius: 12px;
            margin-bottom: 20px;
        }
        
        .config-title {
            font-weight: 600;
            color: #334155;
            margin-bottom: 15px;
            font-size: 16px;
        }
        
        .row {
            display: flex;
            gap: 15px;
        }
        
        .row .input-group {
            flex: 1;
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="header">
            <h1>🤖 AnythingLLM API</h1>
            <p>FSProtect workspace ile etkileşim kurun</p>
        </div>
        
        <div class="content">
            <div class="config-section">
                <div class="config-title">🔧 API Konfigürasyonu</div>
                <div class="row">
                    <div class="input-group">
                        <label for="apiUrl">API URL:</label>
                        <input type="text" id="apiUrl" value="http://192.168.231.44:3001/api/v1/workspace/FSProtect/chat">
                    </div>
                </div>
                <div class="row">
                    <div class="input-group">
                        <label for="mode">Mod:</label>
                        <select id="mode">
                            <option value="query">Query</option>
                            <option value="chat">Chat</option>
                        </select>
                    </div>
                    <div class="input-group">
                        <label for="sessionId">Session ID:</label>
                        <input type="text" id="sessionId" value="gitbook-session-001">
                    </div>
                </div>
            </div>
            
            <div class="input-group">
                <label for="message">💬 Mesajınız:</label>
                <textarea id="message" placeholder="Sorunuzu buraya yazın...">What is AnythingLLM?</textarea>
            </div>
            
            <div class="input-group">
                <label for="apiKey">🔑 API Key (opsiyonel):</label>
                <input type="password" id="apiKey" placeholder="API anahtarınızı girin...">
            </div>
            
            <div class="btn-container">
                <button class="send-btn" onclick="sendRequest()">
                    <span id="btnText">🚀 Gönder</span>
                </button>
            </div>
            
            <div class="loading" id="loading">
                <div class="spinner"></div>
                <p style="margin-top: 15px; color: #6b7280;">İstek gönderiliyor...</p>
            </div>
            
            <div class="response-container" id="responseContainer">
                <div class="response-header" id="responseHeader">📥 API Yanıtı</div>
                <div class="response-content" id="responseContent"></div>
            </div>
        </div>
    </div>

    <script>
        async function sendRequest() {
            const apiUrl = document.getElementById('apiUrl').value;
            const message = document.getElementById('message').value;
            const mode = document.getElementById('mode').value;
            const sessionId = document.getElementById('sessionId').value;
            const apiKey = document.getElementById('apiKey').value;
            
            const sendBtn = document.querySelector('.send-btn');
            const loading = document.getElementById('loading');
            const responseContainer = document.getElementById('responseContainer');
            const responseHeader = document.getElementById('responseHeader');
            const responseContent = document.getElementById('responseContent');
            const btnText = document.getElementById('btnText');
            
            // Validasyon
            if (!message.trim()) {
                alert('Lütfen bir mesaj girin!');
                return;
            }
            
            if (!apiUrl.trim()) {
                alert('Lütfen API URL girin!');
                return;
            }
            
            // UI durumunu güncelle
            sendBtn.disabled = true;
            btnText.textContent = 'Gönderiliyor...';
            loading.style.display = 'block';
            responseContainer.style.display = 'none';
            
            try {
                // İstek body'sini hazırla
                const requestBody = {
                    message: message,
                    mode: mode,
                    sessionId: sessionId,
                    attachments: [],
                    reset: false
                };
                
                // Headers'ı hazırla
                const headers = {
                    'accept': 'application/json',
                    'Content-Type': 'application/json'
                };
                
                // API key varsa ekle
                if (apiKey.trim()) {
                    headers['Authorization'] = `Bearer ${apiKey}`;
                }
                
                // API isteği gönder
                const response = await fetch(apiUrl, {
                    method: 'POST',
                    headers: headers,
                    body: JSON.stringify(requestBody)
                });
                
                // Yanıtı işle
                const data = await response.json();
                
                // Sonucu göster
                responseContainer.style.display = 'block';
                responseContainer.classList.remove('error');
                responseHeader.textContent = `📥 API Yanıtı (Status: ${response.status})`;
                responseContent.textContent = JSON.stringify(data, null, 2);
                
                if (!response.ok) {
                    throw new Error(`HTTP ${response.status}: ${data.message || 'Bilinmeyen hata'}`);
                }
                
            } catch (error) {
                // Hata durumunu göster
                responseContainer.style.display = 'block';
                responseContainer.classList.add('error');
                responseHeader.textContent = '❌ Hata Oluştu';
                responseContent.textContent = `Hata: ${error.message}\n\nDetaylar:\n- API URL'in doğru olduğundan emin olun\n- Ağ bağlantınızı kontrol edin\n- API key gerekli ise doğru key girdiğinizden emin olun\n- CORS ayarlarını kontrol edin`;
                
                console.error('API İsteği Hatası:', error);
            } finally {
                // UI durumunu sıfırla
                sendBtn.disabled = false;
                btnText.textContent = '🚀 Gönder';
                loading.style.display = 'none';
            }
        }
        
        // Enter tuşu ile gönderme
        document.getElementById('message').addEventListener('keydown', function(event) {
            if (event.key === 'Enter' && event.ctrlKey) {
                sendRequest();
            }
        });
        
        // Sayfa yüklendiğinde otomatik odak
        window.onload = function() {
            document.getElementById('message').focus();
        };
    </script>
</body>
</html>

```
{% endtab %}

{% tab title="Python" %}
```python
message = "hello world"
print(message)
```
{% endtab %}

{% tab title="Ruby" %}
```ruby
message = "hello world"
puts message
```
{% endtab %}
{% endtabs %}

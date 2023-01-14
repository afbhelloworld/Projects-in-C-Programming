 //Bu örnekte, bir karakterin ASCII deðerini nasýl bulacaðýnýzý öðreneceksiniz.
 //In this example, you will learn how to find the ASCII value of a character.
 
#include <stdio.h>
int main() {  
    char c;
    printf("Bir karakter girin(please enter a character) : ");
    scanf("%c", &c);  
 
    printf("%c karakteri ASCII degeri(ASCII value) = %d", c, c);
    
    return 0;
}

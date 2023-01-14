 //kullanýcý tarafýndan girilen bir alfabenin sesli mi yoksa ünsüz mü olduðunu kontrol etmeyi öðreneceksiniz.
 // you will learn to check whether a user-entered alphabet is vowel or consonant.
 
#include <stdio.h>
int main() {
    char c;
    int sesliKucukHarf, sesliBuyukHarf;
    printf("Bir karakter girin: ");
    scanf("%c", &c);
 
    sesliKucukHarf = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');//vowel lowercase
 
    sesliBuyukHarf = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');// vowel capital letter
 
    if (sesliKucukHarf || sesliBuyukHarf)
        printf("%c unlu harf.", c);
    else
        printf("%c unsuz harf.", c);
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)

 //kullanýcý tarafýndan girilen doðal sayýya kadar sayýlarýn toplamýný hesaplamayý öðreneceksiniz.
 //You will learn to calculate the sum of numbers up to the natural number entered by the user.
 
 //eðer 10 girersen toplam = 1 + 2 + 3 + ... + 10 - if you enter 10 total = 1 + 2 + 3 + ... + 10
#include <stdio.h>
int main() {
    int n, i, toplam = 0;
 
    printf("Sayi Gir: ");
    scanf("%d", &n);
 
    for (i = 1; i <= n; ++i) {
        toplam += i;
    }
 
    printf("Toplam = %d", toplam);
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)
 

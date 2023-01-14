 // kullanýcý tarafýndan girilen bir tamsayýnýn asal sayý olup olmadýðýný kontrol etmeyi öðreneceksiniz.
 //You will learn to check if an integer entered by the user is a prime number.
 
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Pozitif bir sayi girin(please enter a positive number): ");
    scanf("%d", &n);
 
    for (i = 2; i <= n / 2; ++i) {
 
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
 
    if (n == 1) {
        printf("1 ne asal ne de bilesiktir(1 is neither prime nor composite).");
    }
    else {
        if (flag == 0)
            printf("%d sayisi Asal Sayidir(prime).", n);
        else
            printf("%d sayisi Asal Sayi degildir(not prime).", n);
    }
 
    return 0;
}
 

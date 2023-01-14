 //Bu örnekte, kullanýcý tarafýndan girilen sayýnýn bir palindrom sayý olup olmadýðýný kontrol etmeyi öðreneceksiniz.
 //In this example, you will learn to check if the number entered by the user is a palindrome.
 // These are palindromic numbers 1, 4, 8, 99, 101, 363, 4004, 9889, 13531 etc...
 
#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, originalN;
    printf("Sayi(number): ");
    scanf("%d", &n);
    originalN = n;
 
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
 
    if (originalN == reversedN)
        printf("%d sayisi palindromik sayidir(palindromic).", originalN);
    else
        printf("%d sayisi palindromik sayi degildir(not palindroimc).", originalN);
 
    return 0;
}

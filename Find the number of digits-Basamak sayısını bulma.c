//kullanıcı tarafından girilen bir tam sayıdaki basamak sayısını saymayı öğreneceksiniz.
//You will learn to count the number of digits in an integer entered by the user.
 
#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Sayi(number): ");
    scanf("%lld", &n);
 
 
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }
 
    printf("Basamak Sayisi(number of digits): %d", count);
}
 

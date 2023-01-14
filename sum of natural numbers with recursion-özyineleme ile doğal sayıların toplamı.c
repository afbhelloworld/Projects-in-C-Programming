//özyinelemeli(recursive) bir fonksiyon kullanarak doðal sayýlarýn toplamýný bulmayý öðreneceksiniz.
//You will learn to find the sum of natural numbers using a recursive function.

 
#include <stdio.h>
int sayiTopla(int n);
int main() {
    int num;
    printf("Sayi Gir(please enter a number): ");
    scanf("%d", &num);
    printf("Toplam = %d", sayiTopla(num));
    return 0;
}
 
int sayiTopla(int n) {
    if (n != 0)
        return n + sayiTopla(n - 1);
    else
        return n;
}

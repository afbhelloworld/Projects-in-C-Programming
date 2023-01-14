 //bir tamsayý baþka bir tam sayýya bölündüðünde bölümü ve kalaný bulmayý öðreneceksiniz.
 //You will learn to find the quotient and remainder when an integer is divided by another integer.
 
#include <stdio.h>
int main() {
    int bolunen, bolen, bolum, kalan;
    printf("Bolunen: ");
    scanf("%d", &bolunen);
    printf("Bolen: ");
    scanf("%d", &bolen);
 
    // hesaplama bölümü - Computes quotient
    bolum = bolunen / bolen;
 
    // hesaplma kalaný - Computes remainder
    kalan = bolunen % bolen;
 
    printf("Bölüm(division) = %d\n", bolum);
    printf("Kalan(remainder)= %d", kalan);
    return 0;
}

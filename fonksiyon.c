#include <stdio.h>
#include <math.h> // pow fonksiyonun kullabilmek için "math.h" kutuphanesini ekledik.
 
void usalma(int sayi1, int sayi2)
{
    int sonuc;
    sonuc = pow(sayi1,sayi2);
    
    printf("Isleminin sonucu = %d",sonuc);
}
 
main()
{
    int sayi1,sayi2;
    
    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    usalma(sayi1,sayi2); // fonksiyona 2 sayý gönderiyoruz.
}

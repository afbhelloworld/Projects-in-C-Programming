 //In this C program, you will learn to find the largest value in an array created with the numbers entered by the user.
 //Bu C programýnda Kullanýcýnýn girdiði sayýlarla oluþturulan bir dizide en büyük deðeri bulmayý öðreneceksiniz.
 
#include <stdio.h>
int main() {
    int i, n;
    float arr[100];
    printf("Dizi Eleman Sayisini Girin(Enter Number of Array Elements): ");
    scanf("%d", &n);
 
    for (i = 0; i < n; ++i) {
        printf("Sayi(number)%d: ", i + 1);
        scanf("%f", &arr[i]);
    }
 
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
 
    printf("En Büyük Deger(biggest value) = %.2f", arr[0]);
 
    return 0;
}

//kullanýcý tarafýndan girilen bir tamsayýnýn Armstrong sayý olup olmadýðýný kontrol etmeyi öðreneceksiniz.
//You will learn to check if an integer entered by the user is an Armstrong number.
// 153 = 1*1*1 + 5*5*5 + 3*3*3

#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("3 Basamakli sayi girin(Enter a 3-digit number): ");
    scanf("%d", &num);
    originalNum = num;
 
    while (originalNum != 0) {
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       originalNum /= 10;
    }
 
    if (result == num)
        printf("%d Armstrong sayidir(true).", num);
    else
        printf("%d Armstrong sayi degildir(false).", num);
 
    return 0;
}
 

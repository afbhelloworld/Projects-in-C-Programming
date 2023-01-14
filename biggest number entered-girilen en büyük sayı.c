 // kullanýcý tarafýndan girilen üç sayý arasýnda en büyük sayýyý bulmayý öðreneceksiniz.
 //You will learn to find the largest number among the three numbers entered by the user.
 
#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Sayi1: ");
    scanf("%lf", &n1);
    printf("Sayi2: ");
    scanf("%lf", &n2);
    printf("Sayi3: ");
    scanf("%lf", &n3);
 
    if (n1 >= n2 && n1 >= n3)
        printf("Girilen En Buyuk Sayi(biggest number entered) : %.2lf.", n1);
 
    else if (n2 >= n1 && n2 >= n3)
        printf("Girilen En Buyuk Sayi(biggest number entered) : %.2lf.", n2);
 
    else
        printf("Girilen En Buyuk Sayi(biggest number entered) : %.2lf.", n3);
 
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)

 //kullanýcý tarafýndan girilen bir sayýnýn çift mi yoksa tek mi olduðunu kontrol etmeyi öðreneceksiniz.
 //You will learn to check whether a number entered by the user is even or odd.
 
#include <stdio.h>
int main() {
    int num;
    printf("Sayi Gir: ");
    scanf("%d", &num);
 
    // sayý 2'ye tamamen bölünebiliyorsa doðrudur True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d cift(||).", num);
    else
        printf("%d Tek(|).", num);
    
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)

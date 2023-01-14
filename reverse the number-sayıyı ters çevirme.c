 //You will learn to reverse the number entered by the user.
 //kullanýcý tarafýndan girilen sayýyý tersine çevirmeyi öðreneceksiniz.
 
#include <stdio.h>
int main() {
    int n, ters = 0, kalan;
    printf("Sayi : ");
    scanf("%d", &n);
    while (n != 0) {
        kalan = n % 10;
        ters = ters * 10 + kalan;
        n /= 10;
    }
    printf("Ters(opposite) = %d", ters);
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)

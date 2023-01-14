 // Fibonacci sequence
 //ilk n sayýnýn (kullanýcý tarafýndan girilen) Fibonacci dizisini görüntülemeyi öðreneceksiniz.
 //You will learn to view the Fibonacci sequence of the first n numbers (user-entered).
 //Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21,...
 
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Terim sayisini girin: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
 
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
 
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)

 //Bu örnekte özyinelemeyi kullanarak bir sayýnýn faktöriyelini bulmayý öðreneceksiniz.
 //In this example you will learn to find the factorial of a number using recursion.
 
#include<stdio.h>
long int factor(int n);
int main() {
    int n;
    printf("Pozitif bir sayi girin(please enter a positive number): ");
    scanf("%d",&n);
    printf(" %d! = %ld", n, factor(n));
    return 0;
}
 
long int factor(int n) {
    if (n>=1)
        return n*factor(n-1);
    else
        return 1;
}
 

 //A different example of calculating OCD of two integers (for both positive and negative integers) using loops and decision expressions
 //Döngüler ve karar verme ifadeleri kullanarak iki tam sayýnýn (hem pozitif hem de negatif tam sayýlar için) OBEB hesaplamasýnýn hakkýnda farklý bir örnek

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;
 
    printf("1. Sayi(number): ");
    scanf("%d", &n1);
    printf("2. Sayi(number): ");
    scanf("%d", &n2);
 
    for(i=1; i <= n1 && i <= n2; ++i)
    {
 
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
 
    printf("%d ve  %d sayilarinin OBEB(GDC)' i = %d", n1, n2, gcd);
 
    return 0;
}

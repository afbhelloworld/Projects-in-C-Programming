#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("bir sayi giriniz = ");
    scanf("%d", &x);
    printf("karekok = %d",(int) trunc(sqrt(x)));

    return 0;
}

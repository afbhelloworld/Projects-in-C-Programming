 //C programlamasýnda ikinci dereceden bir denklemin köklerini bulmayý öðreneceksiniz.
 //You will learn to find the roots of a quadratic equation in C programming.
 
 //If greater than 0, the roots are real and different.   -  0’dan büyükse, kökler gerçek ve farklýdýr.
 //If it is equal to 0, the roots are real and equal.    -   0’a eþitse, kökler gerçek ve eþittir.
//If it is less than 0, the roots are complex and different.   -  0’dan küçükse, kökler karmaþýk ve farklýdýr.
                         //we have three situations to solve*****
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, kok1, kok2, realPart, imagPart;
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
 
    discriminant = b * b - 4 * a * c;
 
    // gerçek ve farklý kökler için durum  - condition for real and different roots
    if (discriminant > 0) {
        kok1 = (-b + sqrt(discriminant)) / (2 * a);
        kok2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", kok1, kok2);
    }
 
    // gerçek ve eþit kökler için koþul - condition for real and equal roots
    else if (discriminant == 0) {
        kok1 = kok2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", kok1);
    }
 
    // eðer kökler gerçek deðilse - if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("kök1 = %.2lf+%.2lfi ve kök2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
 
    return 0;
}

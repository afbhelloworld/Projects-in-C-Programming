 //3.Deðiþken Kullanmadan Yer Deðiþtirme
 //3. Changing Year Without Using Variables
 
#include <stdio.h>
int main() {
    double a, b;
    printf("Sayý 1: ");
    scanf("%lf", &a);
    printf("Sayý 2: ");
    scanf("%lf", &b);
 
    a = a - b;   
 
    b = a + b;
 
    a = b - a;
 
    printf("Degisiklikten sonra(after the change), a = %.2lf\n", a);
    printf("Degisiklikten sonra(after the change), b = %.2lf", b);
    return 0;
}

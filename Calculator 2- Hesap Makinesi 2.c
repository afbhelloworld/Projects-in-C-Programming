//In this example, you will learn the C program that performs the arithmetic operation according to the operation type -
//( + , – , * , / ) that the user selects and the numbers entered by the user.
//Bu örnekte kullanýcýnýn seçeceði iþlem türüne göre -
//( + , – , * , / ) ve kullanýcýnýn girdiði sayýlara göre aritmetiksel iþlemi gerçekleþtiren C programýný öðreneceksiniz.

#include <stdio.h>
int main() {
    char operator;
    double sayi1, sayi2;
    printf("Yapmak istediginiz islem(please select a transaction) (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Sayi(number)1: ");
    scanf("%lf", &sayi1);
    printf("Sayi(number)2: ");
    scanf("%lf", &sayi2);
 
    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", sayi1, sayi2, sayi1 + sayi2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", sayi1, sayi2, sayi1 - sayi2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", sayi1, sayi2, sayi1 * sayi2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", sayi1, sayi2, sayi1 / sayi2);
        break;
    default:
        printf("Yanlýþ operatör seçimi(false operator)!!!");
    }
 
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)
 

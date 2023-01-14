 //kullanýcý tarafýndan girilen iki sayý arasýndaki tüm asal sayýlarý yazdýrmayý öðreneceksiniz.
 //You will learn to print all prime numbers between two numbers entered by the user.
 
#include <stdio.h>
 
int main() {
   int low, high, i, flag;
   printf("Sayi(number) 1: ");
   scanf("%d", &low);
   printf("Sayi(number) 2: ");
   scanf("%d", &high);
   printf(" %d ve  %d arasindaki asal sayilar(all prime numbers between two numbers): ", low, high);
 
   while (low < high) {
      flag = 0;
 
      if (low <= 1) {
         ++low;
         continue;
      }
 
      for (i = 2; i <= low / 2; ++i) {
 
         if (low % i == 0) {
            flag = 1;
            break;
         }
      }
 
      if (flag == 0)
         printf("%d ", low);
 
      ++low;
   }
 
   return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)
//:) you are smart person .
 

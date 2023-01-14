//Calculating GDC with While Loop
//While Döngüsü ile EBOB Hesaplama

#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("iki sayi girin(please enter two number) : ");
    scanf("%d %d",&n1,&n2);
 
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("OBEB(GDC)= %d",n1);
 
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)
// you are smart person

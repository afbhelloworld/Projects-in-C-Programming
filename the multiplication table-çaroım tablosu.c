#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int x;
	
	for(i=1; i<=10 ;i++){
	   for(x=1; x<=10;x++)
		{
			int toplam =x*i;
			printf("%i  ",toplam);
			
		}
		printf("\n");
	   
	}
	
	return 0;
}

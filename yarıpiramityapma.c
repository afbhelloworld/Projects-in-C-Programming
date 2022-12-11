#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int n;
	int x;
	printf("birsayi giriniz :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(x=1;x<=n+1-i;x++)
		{
		
		printf("*");
	  }
	  	printf("\n");
	}
	

	
	return 0;
}

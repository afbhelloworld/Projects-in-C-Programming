#include <stdio.h>
#include <stdlib.h>


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

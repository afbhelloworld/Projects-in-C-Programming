#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	 
	 int x;
	 scanf("%hd",&x);
	 if(x>90){
	 	printf("AA");
	 }
	else{
		if(x>80){
			printf("BB");}
			else{
				if(x>70){
					printf("BB");}
					else{
						if(x>50){
							printf("DD");}
							else{
								printf("FF");
							}
							
						}
					}
				}
	return 0;
}

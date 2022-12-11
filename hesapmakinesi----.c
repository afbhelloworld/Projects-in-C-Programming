#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x;
	int y;
    char islem;
    int sonuc;
	
	printf("birsayi giriniz  :");
	scanf("%hd",&x);
	printf("lutfen birtane daha girin  :");
	scanf("%hd",&y);
	printf("lufen bir iþlem seciniz +,/,*,-  :");
	scanf("%d",&islem);
	
	switch(sonuc){
		case 1:
		printf("toplama iþlemi %i",x+y);
		break;
	}
	
	return 0;
}

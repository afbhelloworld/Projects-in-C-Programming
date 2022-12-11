#include <stdio.h>

int main() {
	int sayi[5];
	int sum = 0;
	 for(int i = 0; i<5; i++) {
		printf("%d. sayiyi giriniz :", i+1);
		scanf("%d", &sayi[i]);
		sum += sayi[i];
}

     printf("toplam = %d",sum);
     
	return 0;

}


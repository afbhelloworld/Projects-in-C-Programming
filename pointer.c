#include <stdio.h>

int main(){
	
	int k = 1;//pointer sayesinde 1 sayısının ram'deki yerini buluyor . (16'lık sistemde)(62fe14)
	int *p;
	
	p = &k;
	printf("%x",p);//pointer'ın ram'deki yerini buluyoruz.Eğer o yerde hangi değer var görmek istersek *p yazıyoruz.
	
	
	
	return 0;
}

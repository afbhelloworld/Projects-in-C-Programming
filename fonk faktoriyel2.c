#include <stdio.h>

int main() {
	int sonuc = kombinasyon(5, 3);
	printf("%d",sonuc);
	return 0;
}

int kombinayon(long n,long r) {
	return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n-r));	
	
}

int faktoriyel(int x) {
	int p = 1;
	for(int i= 1;i <= x;i++){
		p*= i;
		
	}
	
	return p;
}


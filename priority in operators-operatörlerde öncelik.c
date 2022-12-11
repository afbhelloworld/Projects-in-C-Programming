#include <stdio.h>

int main() {
	
	int a = 6;
	int b = 7;
	
	printf("%d\n", a+++--b);//++a olduðunda iþlemi hemen yapar ama a++ olduðunda iþlemi daha sonra yapar.
	printf("%d\n", a+b);
	//a+++--b olduðunda ortadaki + iki iþlemin toplamýný kasteder .
	
	return 0;//sayýsal operatörler ve mantýksal operatörler araþtýr sorumlusun
}

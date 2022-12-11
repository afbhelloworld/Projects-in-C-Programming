#include <stdio.h>

int main() {
	int sayi[5] = {1,2,3};
      
      for(int i = 0; i<5; i++) {
      	printf("%x ", sizeof(sayi));//&sayi[i]
	  }//sizeof bellekte nekadar yer kapladýðýný yazýyor byte
     
	return 0;

}

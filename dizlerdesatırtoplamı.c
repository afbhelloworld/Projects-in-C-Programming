#include <stdio.h>

int main() {
    
    int tablo[3][5] ={{1,2,3,4,5},{2,3,4,5,6},{6,7,8,9,10}};
    int sum = 0;
    
        for(int i =0; i<3;i++){
        for(int j =0; j<5;j++){
            sum += tablo[i][j];
		}}
		
		printf("toplam = %d",sum);
   
	return 0;

}

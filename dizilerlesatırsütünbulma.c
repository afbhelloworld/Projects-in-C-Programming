#include <stdio.h>

int main() {
    
    int tablo[3][5] ={{1,2,3,4,5},{2,3,4,5,6},{6,7,8,9,10}};
  
        for(int i =0; i<3;i++){
        for(int j =0; j<5;j++){
           if(tablo[i][j]==6){
           	 printf("%d.satir  %d.sutun  ",i+1,j+1);
           	
		   }
		}}
		
	
   
	return 0;

}

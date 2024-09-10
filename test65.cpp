#include <stdio.h>

int main() {
   int x[6] = {8,2,1,9,3,4};
   int min  = x[0];
   int max = x[0];
   
   
   for(int i = 1 ; i <= 6; i++){
   	if (x[i] > max){
   		max = x[i];
   	}
   	if (x[i] < min ){
   		min = x[i];
   	}
   }
    
    printf("min %d \n",min);
    printf("max %d \n",max);

    return 0;
}


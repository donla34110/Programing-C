#include <stdio.h>


int main(){
	
	int number[5];
	int max,min;
	printf("Enter 5 number:\n");
	
	for(int i = 0;i <5;i++){
		printf("Number %d:",i+1);
		scanf("%d",&number[i]);
	}
	
	
	
	for(int i = 1 ; i < 5 ; i++){
		
		if (number[i] > max){
			max = number[i];
		}
		if (number[i] < min){
			min = number[i];
		}
	}	
	
	printf("Maximum value: %d\n",max);
	printf("Minimum value: %d\n",min);
	
	
	
	return 0;
	
}

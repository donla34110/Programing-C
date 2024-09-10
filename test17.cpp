#include <stdio.h>


int main (){
	int num1;
	
	printf("Enter your number:");
	
	scanf("%d",&num1);
	
	
	printf("Binary:");
	
	
	for (int i = 5 ;i >= 0 ; i--){
		printf("%d ",(num1 >> i ) & 1);
		
	}
	printf("\n");
	
	return 0;
}

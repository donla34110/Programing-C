#include <stdio.h>


int main (){
	int number;
	
	printf("Enter your number");
	scanf("%d",&number);
	
	
	if (number % 2 == 0){
		printf("%d is an Even number .\n",number);
		
	}
	else{
		printf("is an odd number. %d\n",number);
		
		
		
	}
	
	return 0;
	
	
	
}

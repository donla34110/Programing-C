#include <stdio.h>

int main(){
	int num1;
	printf("Enter an integer");
	scanf("%d",&num1);
	if(num1 > 0){
		printf("%d is positive \n",num1);
	}
	else if (num1 < 0){
		printf("%d is negative \n",num1);
	}
	else{
		printf("%d zero: \n",num1);
	}
	
	return 0;
}

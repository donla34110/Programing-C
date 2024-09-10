#include <stdio.h>

int main (){
	int num1,num2;
	float quotient;
	
	printf("Enter your number:");
	scanf("%d",&num1);
	printf("Enter your number:");
	scanf("%d",&num2);
	
	
	quotient = (float)num1 / num2;
	
	
	printf("Quotien : %f.2\n",quotient);
	
	return 0;
	
}

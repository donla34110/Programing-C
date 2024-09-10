#include <stdio.h>

int main(){
	int num1,num2;
	
	printf("Enter your nuber1:");
	scanf("%d",&num1);
	printf("Enter your nuber2:");
	scanf("%d",&num2);
	
	
	if (num1 % 2 == 0 )printf("result: %d\n",num1) ;
	if (num2 % 2 == 0 )printf("result: %d\n",num2);
	return 0;
}


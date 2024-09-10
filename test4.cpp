#include <stdio.h>
int main(){
	int years , month , day;
	
	printf("Enter the number of years:");
	scanf("%d",&years);
	
	printf("Enter the number of month:");
	scanf("%d",&month);
	
	
	day = (365 * years) + (month * 30);
	
	
	printf("Total number of days: %d\n",day);
	
	return 0;
	
	
}

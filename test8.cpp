#include <stdio.h>

int main(){
	
	int amount;
	int thousand , fiveHunred , hunred;
	
	printf("Enter the amount you want to withdraw:");
	
	scanf("%d",&amount);
	
	thousand = amount / 1000;
    amount %= 1000;

    fiveHunred = amount / 500;
   	amount %= 500;

    hunred = amount / 100;
    amount %= 500;
  
	printf("1000 x %d | 500 X %d | 100 x %d\n",thousand, fiveHunred, hunred);
	
	return 0;
}

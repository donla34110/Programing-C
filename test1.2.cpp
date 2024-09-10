/*
#include <stdio.h>

int main(){
	int number[5];
	int max, min;
	
	
 printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number[i]);
    }
	max = number[0];
	min = number[0];
	
	for (int i = 1; i < 5; i++) {
        if (number[i] > max) {
            max = number[i];
        }
        if (number[i] < min) {
            min = number[i];
        }
    }
		printf("Max: %d\n",max);
		printf("min: %d\n",min);
		
		return 0;
	
	
	
}
*/

/*
#include <stdio.h>

int main(){
	int amount;
	int thousand ,fiveHunred, hunred;
	
	
	printf("Enter the amout you want to withdrew : ");
	scanf("%d",&amount);
	
	
	thousand = amount/1000;
	amount = amount % 1000;
	
	fiveHunred  = amount/500;
	amount = amount % 500;
	
	hunred = amount/100;
	amount = amount % 100;
	
	
	
	printf("1000 x %d | 500 x %d | 100 x %d\n",thousand,fiveHunred,hunred);


return 0;	
}
*/
#include <stdio.h>


int main(){
	int score1, score2, totalscore;
	char grade;
	
	
	printf("enter the first score (out of 50) : ");
	scanf("%d",&score1);
	
	printf("enter the first score (out of 50) : ");
	scanf("%d",&score2);
	
	
	
	if (score2 < 0 || score2 > 50) {
        printf("Invalid score! Please enter a score between 0 and 50.\n");
        return 1;
    }
    if (score1 < 0 || score1 > 50) {
        printf("Invalid score! Please enter a score between 0 and 50.\n");
        return 1;
    }
	

	totalscore =  score1 + score2;
	
	if(totalscore >= 80){
		grade = 'A';
	}else if (totalscore >= 75){
		grade = 'B';
	}else if (totalscore >= 70){
		grade = 'c';
	}else if (totalscore >= 60){
		grade = 'D';
	}else if (totalscore >= 50){
		grade = 'E';
	}
	else{
		grade = 'F';
	}
	
	printf("Total  Score : %d\n",totalscore);
	printf("Grade : %c\n",grade);
	
	
	
	return 0;
	
	
}





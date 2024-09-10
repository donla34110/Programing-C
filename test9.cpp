#include <stdio.h>

int main (){
	int score, score2 , total;
	char grade;
	
	printf ("1.Enter the first score (out of 50):");
	scanf("%d",&score);
	
	if (score < 0 || score > 50){
		printf("1.Invalid sore! Please enter a score between 0 and 50 .\n");
		return 1; 	
	}	
	printf ("2.Enter the first score (out of 50):");
	scanf("%d",&score2);
	
	
	if (score2 < 0 || score2 > 50) {
        printf("2.Invalid score! Please enter a score between 0 and 50.\n");
        return 1;
    }

     total =  score + score2;
     
     if(total >= 80){
     	grade = 'A';
     	
     }
     else if (total >= 75){
     	grade = 'B';
     }
     else if (total >= 70){
     	grade = 'C';
     	
     }
     else if (total >= 60){
     	grade ='D';
     	
     }else{
     	grade = 'F';
     }
     
     
     printf("Total Score: %d\n",total);
     printf("Grade: %c\n",grade);
     
     return 0;
}




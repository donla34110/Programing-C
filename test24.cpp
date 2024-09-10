#include <stdio.h>
int main(){

    int score;
    char grade;

    printf("Enter your score:");
    scanf("%d",&score);
    if (score >=80){
        printf("Grade: A\n");
    }else if (score >=75){
        printf("Grade: B");
    }else if (score >=60){
        printf("Grade: C");
    }else if (score >=50){
        printf("Grade: C");
    }else{
        printf("Grade: F");
    }
    return 0;
}


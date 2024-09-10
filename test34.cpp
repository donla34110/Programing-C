#include <stdio.h>


int main (){
    int num1,num2,num3;

    printf("enter number1:");
    scanf("%d",&num1);
    printf("enter number2:");
    scanf("%d",&num2);
    printf("enter number3:");
    scanf("%d",&num3);


    if (num1 % 2 !=0 && num2 %2 !=0 && num3 %2 !=0){
        printf("ALL are odd numbers\n");

    }else{
        printf("Not all are odd number:\n");

    }

    return 0;


}
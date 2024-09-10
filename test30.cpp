#include <stdio.h>

int main (){

    int num;

    printf("enter two-digital mumber:");

    scanf("%d",&num);

    if (num / 10 == num % 10){

        printf("Double number:\n");


    }else {

        printf("Not a double number\n");

    }

    return 0;
}
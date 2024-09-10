#include <stdio.h>

int main(){

    int age ;


    printf("Enter your age :");

    scanf("%d",&age);
    if (age <= 12){
        printf("chilern\n");
    }
    else if (age <=18){
        printf("W\n");
    }else if (age <=60 ){
        printf("Z\n");

    }else {
        printf("O\n");
        }

    return 0;
}
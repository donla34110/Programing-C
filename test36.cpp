#include <stdio.h>

int main (){

    int sarary;

    printf("enter your num:");
    scanf("%d",&sarary);

    if (sarary < 15000){
        printf("low|\n");

    }else if (sarary < 50000){
        printf("medium:");

    }
    else{
        printf("Hight:\n");
    }

    return 0;


}
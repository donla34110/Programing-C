#include <stdio.h>


int main (){

    int num1,product = 1;


    printf("Enter integer:");

    scanf("%d",&num1);
    int i =1;
    while (i <= num1 ){
        product = product * i;
        i++;
    }
    printf("result: %d\n",product);
}
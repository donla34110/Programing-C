#include <stdio.h>

int main (){

    int num;

    printf("Enter a three-digital number:");

    scanf("%d",&num);


    int first = num / 100;//0.22  1.22
    int second = (num / 10 ) %10;//2.2 3.2
    int third = num % 10;//2.2

    if ((second == first + 1) && (third == second + 1)){
        printf("Sequential number\n");
    }else {
        printf("Not a sequential number\n");
    }
    return 0;
    
}
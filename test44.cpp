#include <stdio.h>
int main (){
    int num,sum = 0;//1 4 9

    printf("Enter a positive integer:");

    scanf("%d",&num);

    int i= 1 ;
    while (i <= num){
        sum += i;
        i = i +2;
    } 
    printf("Sum of odd number= %d\n",sum);

    return 0;
}
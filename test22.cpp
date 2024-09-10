#include <stdio.h>

int main (){

    int num;
    float sum =0;

    printf("enter an integer:\n");

    for (int i =1;i<=5;i++){
        printf("num");
        scanf("%d",&num);

        sum = sum + num;
    }
    printf("result:%.2f\n",(float) sum / 5);
}
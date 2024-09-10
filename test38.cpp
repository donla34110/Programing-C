#include <stdio.h>

int main(){
    int num,sum = 1;

    printf("enter a integer:");

    scanf("%d",&num);

    for (int i= 1; i < num;i++){
        sum = sum * i;
    }

    printf("result:%d\n",sum);

    return 0;
}
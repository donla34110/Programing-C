#include <stdio.h>
int main(){
    int num ,sum = 0 ,n;
    float avg;
    printf("enter a avg:");
    scanf("%d",&num);
    int i = 0;
    do{
        printf("Enter number %d",i + 1);
        scanf("%d",&n);

        sum = sum + n;
        i++;
    }while (i < num);

    avg = (float)sum / num;
    printf("Average : %.2f\n",avg);

    return 0;
}
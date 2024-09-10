#include <stdio.h>


int main(){
    int arry[100], n, sum = 0;

    printf("Enter a number:");

    scanf("%d",&n);

    for (int i=0 ;i < n;i++){

        printf("Enter Element %d: ",i + 1);
        scanf("%d",&arry[i]);
        sum += arry[i];
   
    }

    printf("Sum of element  = %d\n",sum);
    return 0;
}
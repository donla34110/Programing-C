#include <stdio.h>


int main (){

    int n , sum = 0;


    printf("Enter an positive integer:");
    scanf("%d",&n);
   int i = 1;
    while (i <= n) {
        if (i % 2 != 0) {
            i++;
            printf("Count of even numbers = %d\n", i);
            continue;
        }
        sum++;

        i++;
        printf("Count of even  = %d\n", i);
    }
    printf("Count of even numbers = %d\n", sum);
}
#include <stdio.h>


int main(){
    int n;

    printf("Enter a positive integer:");
    scanf("%d",&n);


    for (int i = 1; i <= n; i++){

        if (i % 2 !=0)
            continue;

        printf("%d ",i);
    }


    printf("\n");


    return 0;
}
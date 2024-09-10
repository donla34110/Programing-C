#include <stdio.h>

int main (){
    int arry[100], n;

    printf("Enter a number:");
    scanf("%d",&n);

    for (int i = 1 ; i <= n ; i++){
        printf("Enter element : %d ",i );
        scanf("%d",&arry[i]);
    }

    printf("Arry in reverse order:");

    for (int i = n ; i >=1 ; i--){
        printf("%d ",arry[i]);

    }

    printf("\n");


    return 0;
}
#include <stdio.h>

int main (){
    int array1[100], array2[100],n;

    printf("Enter number of element:");
    scanf("%d",&n);



    for(int i = 1 ; i <= n; i++){
        printf("Enter element %d:",i);
        scanf("%d",&array1[i]);
    }


    for (int i = 1 ; i <= n ; i++){
        array2[i] = array1[i];
    }


    printf("copy array:");
    for(int i = 1 ; i <= n ; i++){
        printf("%d",array2[i]);
    }


    printf("\n");

    return 0;
}
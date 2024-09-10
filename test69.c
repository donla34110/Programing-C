#include <stdio.h>

int main (){
    int arr[50], arr2[50],merged[100],n1,n2;
    printf("Enter bumber of elements in the first array:");
    scanf("%d",&n1);

    for (int i = 1 ; i <=n1 ; i=i+1){
        printf("Enter of number: %d ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter number of element in the second array: ");
    scanf("%d",&n2);
    for (int i = 1 ; i <=n2 ; i=i+1){
        printf("Enter of number: %d ",i);
        scanf("%d",&arr2[i]);
    }

    for(int i = 1 ; i <= n1 ; i=i+1){
        merged[i] = arr[i];
    }

    for (int i = 1 ; i <= n2 ; i=i+1){
        merged[n1 + i] = arr2[i];

    }

    for (int i = 1; i <= n1 + n2; i+=1 ){
        printf("%d",merged[i]);
    }

    printf("\n");

    return 0;
} 
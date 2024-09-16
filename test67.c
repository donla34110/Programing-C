#include <stdio.h>



int main(){
    int arr[1100],n;
    printf("Enter number of element: ");
    scanf("%d",&n);

    for(int i = 0 ; i < n; i++){
        printf("Enter element %d:");
        scanf("%d",&arr[i]);

    }

    printf("Even number:");

    for (int i = 0; i < n ;i++){
        if(arr[i] % 2 == 0){
            printf("%d",arr[i]);
        }
    }
    printf("\n");
    return 0;
    

}
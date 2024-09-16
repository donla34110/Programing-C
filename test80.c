#include <stdio.h>

int main (){
    int arr[100],n,sum = 0;

    printf("Enter number of element :");

    scanf("%d",&n);

    for(int i = 0; i < n ; i++){
        printf("Enter element %d:",i + 1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0 ; i < n ; i++){
        if(arr[i] > 0 ){
            sum += arr[i];
        }
    }
    printf("Sum of positive numbers = %d \n",sum);
    return 0;
}
#include <stdio.h>

float findAverage(int arr[], int n){
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        sum += arr[i];
    }
    return (float)sum / n ;
}
int main (){
    int arr[100], n;
    printf("Enter element");
    scanf("%d",&n);

    for (int i = 1 ; i <= n;i++){
        printf("Enter element :%d ", i );
        scanf("%d",&arr[i]);
    }

    printf("Average value = %.2f\n", findAverage(arr, n));
    return 0;
}
#include <stdio.h>
int max(int arr[],int n){
    int max = arr[0];
    for(int i = 1; i <=n ; i++){
        if(arr[i] > max){
            max =  arr[i];
        }
    }
    return max;
}
int main(){
    int arr[100],n;
    printf("Enter number of element :");
    scanf("%d",&n);

    for (int i = 0 ; i < n;i++){
        printf("Enter element :%d ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("Maximum value = %d\n",max(arr,n));

    return 0;
}

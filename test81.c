#include <stdio.h>

int isPrime(int num){
    if(num <= 1)return 0;
    for(int i = 2 ; i <= num / 2 ; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int arr[100],n;

    printf("Enter number of element :");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        printf("ENter element %d:",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("Prime numbers of array: ");
    for(int i = 0 ; i < n ; i++){
        if(isPrime(arr[i])){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    return 0;

}
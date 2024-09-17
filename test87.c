#include <stdio.h>

int searchNumber(int arr[], int n, int key){
    for(int i = 0 ; i < n; i++ ){
        if(arr[i] ==  key){
            return 1;
        }

    }
    return 0;
}
int main (){
    int arr[100], n ,key;

    printf("Enter nunber of element :");
    scanf("%d",&n);


    for (int i = 0 ; i < n ; i++){
        printf("Enter element: %d", i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the nunber to search :");
    scanf("%d",&key);

    if(searchNumber(arr,n ,key)){
        printf("Enter unmber of elements :");

    }else{
        printf("Number not found in the array:");
    }

    return 0;



}


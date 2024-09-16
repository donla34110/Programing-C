#include <stdio.h>

int main (){
    int arr[100], even[100],odd[100];
    int n, e = 0, o = 0;

    printf("Enter number of element:");
    scanf("%d",&n);

    for(int i = 0 ; i < n; i++){
        printf("Enter element :%d", i + 1);
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            even[e++] = arr[i];
        }else{
            odd[o++] = arr[i];
        }
    }
    printf("Even nubers:");
    for(int i = 0 ; i < e; i++){
        printf("%d",even[i]);
    }
    printf("\nOdd numbers:");
    for(int i = 0 ; i < o; i++){
        printf("%d",odd[i]);
    }
    printf("\n");
    return 0;
    
}
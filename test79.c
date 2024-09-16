#include <stdio.h>

int main (){
    int arr1[100],arr2[50],mereg[50],n1,n2,n;

    printf("Enter number of element in the first array:");
    scanf("%d",&n1);
    for(int i = 0 ; i < n1 ; i=i+1){
        printf("Enter element : %d",i + 1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter number of element in the second array:");
    scanf("%d",&n2);
    for(int i = 0 ; i < n2 ; i=i+1){
        printf("Enter element : %d",i + 1);
        scanf("%d",&arr2[i]);
    }
    n = n1 + n2;

    for(int i = 0 ; i < n1;i++){
        mereg[i] = arr1[i];
    }
    for(int i = 0 ; i < n2; i++){
        mereg[n1 + i] = arr2[i];
    }
    for (int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1; j < n; j++){
            if(mereg[i] > mereg[j]){
                int temp = mereg[i];
                mereg[i] = mereg[j];
                mereg[j] = temp;
            }
        }
    }
    printf("Mereg and sorted array:");
    for(int i = 0 ; i < n ; i++){
        printf("%d",mereg[i]);
    }
    printf("\n");
    return 0;
}
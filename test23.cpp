#include <stdio.h>
int main(){
    int arrt[5],temp;
    printf("enter 5 integer:\n");
    for (int i = 0 ; i < 5 ; i++){
        printf("number:");
        scanf("%d",&arrt[i]);
    }
    for(int i = 0; i < 5; i++){
        for (int j = i + 1;j < 5 ; j++){
            if(arrt[i] > arrt[j]){
                temp = arrt[i];
                arrt[i] =  arrt[j];
                arrt[j] =  temp;
            }
        }
    }
    printf("Sorted ingeters:");
        for (int i = 0;i < 5; i++){
            printf("%d ",arrt[i]);
        }
        printf("\n");
        return 0;
}
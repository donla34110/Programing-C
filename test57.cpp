#include <stdio.h>


int main (){

    int min, max ,n,arry[100];

    printf("Emter an number:");

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("element :%d",i+1);
        scanf("%d",&arry[i]);
    }
    max =arry[0];
    min = arry[0];


    for (int i =1 ; i < n; i++){
        if(arry[i] > max){
            max = arry[i];
        }
        if(arry[i] < min ){
            min = arry[i];
        }
    }
    printf("max = %d , min = %d \n",max,min);

    return 0;
}

#include <stdio.h>


int main(){
    int n ,Average,sum = 0 ,arry[100];
    
    printf("Enter a n:");

    scanf("%d",&n);


    for (int i = 1 ; i <=n ; i++ ){
        printf("number is a :%d",i);
        scanf("%d",&arry[i]);
        sum += arry[i];
    }
    Average = sum / n;

    printf("%d",Average);
    return 0;
}
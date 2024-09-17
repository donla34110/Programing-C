#include <stdio.h>

int sum(int n ){
    int total = 1;

    for(int i = 1 ; i <= n ;i++){
        total *= i ;
    }
    return total;
}

int main (){
    int n;
    printf("Enter s positive intrgerL:");
    scanf("%d",&n);

    printf("Sum = %d \n",sum(n));
    return 0;
}
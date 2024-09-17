#include <stdio.h>

int sumodd(int n){
    int sum = 0;
    for(int i =1  ; i <=n; i+=2){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);

   printf("Sum of odd nunbers  = %d\n",sumodd(n));
}
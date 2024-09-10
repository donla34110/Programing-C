#include <stdio.h>
int main(){
    int n , sum = 0 ;
    printf("Enter a prositive integer:");
    scanf("%d",&n);
    int i =1;
    do {
        if (i % 2 !=0){
            sum += i;
        }
        i++;
    }while(i <= n);
    printf("Sum of odd numbers = %d\n",sum);
    
}
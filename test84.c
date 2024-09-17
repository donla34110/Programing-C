#include <stdio.h>
int IsPrime(int n ){
    if(n <= 1 ) return 0;
    for (int i = 2; i < n / 2;i++){
        if(n % 2 == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a positivr  integer :");
    scanf("%d",&n);
    if(IsPrime(n)){
        printf("%d is a prime number. \n ",n);
    }else{
        printf("%d is not a prime number:\n");
    }

}


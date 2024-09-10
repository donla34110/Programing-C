#include <stdio.h>


int main(){
    int num;
    printf("Enter a number to count down from:");
    scanf("%d",&num);
   

    while(num >= 0 ) {
        printf("%d\n",num);
        num--;
    }

    return 0;
}



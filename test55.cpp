#include <stdio.h>


int main (){
    int n,t1=0,t2=1,total = 0;

    printf("Enter a positive:");
    scanf("%d",&n);

    while (total <=n ){
        printf("total: %d ",total);
        total = t1 + t2;

        t1 = t2;
        t2 = total;
    }

    return 0;
}
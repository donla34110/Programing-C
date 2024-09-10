#include <stdio.h>

int main(){
    int num, count= 0;
    printf("Enter a integer:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++){

        if(i % 3 !=0)
            continue;
        count++;
        
    }

    printf("Count of number divisible by 3 = %d\n",count);


    return 0;

}
#include <stdio.h>

int  main (){

    int  n, sum= 0 ;

    printf("Enter An positive integer:");

    scanf("%d",&n);

    int i = 1;
    while ( i  <= n){
        if ( i % 5 ==0)
        {
            sum = sum + i;
        }
        i++;
    }

printf("Sum of numbers divisible by 5 = %d\n", sum);

    

return 0;

}
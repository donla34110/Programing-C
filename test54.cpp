#include <stdio.h>


int main (){
    int n, num ,max ,min ;

    printf("Enter a integer:");
    scanf("%d",&n);


    for (int i = 0; i<n ;i++){
        printf("Enter a number: %d ",i+1);
        scanf("%d",&num);

        if (i == 0 ){
            max = min = num;
        }else{
            if(num > max) max = num;
            if(num < min) min = num;
        }

    }
    printf("Maximum = %d ,Minximum = %d\n",max,min);

    return 0;


}
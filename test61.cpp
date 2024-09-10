#include <stdio.h>

int main (){
    int array[100], n ,num ,found = 0;

    printf("Enter number of element:");

    scanf("%d",&n);


    for (int i = 1 ; i <=n ; i++){
        printf("Enter element : %d ", i);
        scanf("%d",&array[i]);
    }

    printf("Enter the number to seacrh:");
    scanf("%d",&num);

    for (int i = 1 ; i <=n ; i++){
        if (array[i] == num){
            found = 1;
           
        }
    }

    if (found){
        printf("Number %d found in the array. \n",num);

    }else {
        printf("Number %d not found in the array.\n",num);

    }
    return 0;
}

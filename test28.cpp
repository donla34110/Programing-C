#include <stdio.h>


int main (){
    int month;
    printf("enter your num:");
    scanf("%d",&month);
    if (month == 2){
        printf("28 or 29\n");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        printf("30 day \n");
    }else if (month >=1 && month <=12){
        printf("31 day\n");

    }
    else{
        printf("Invalid \n");
    }

    return 0;
}
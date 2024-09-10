#include <stdio.h>
int main (){
    int day;

    printf("Enter of day");
    scanf("%d",&day);


    if(day>=1 && day<=5){
        printf("Weekday\n");

    }else if (day == 6 || day == 7){
        printf("Weekend\n");
    }
    else{
        printf("Invalid\n");
    }

    return 0;
}
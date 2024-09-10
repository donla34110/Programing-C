#include <stdio.h>

int main(){
    int hour , minute;

    printf("enter time (hour and minute):");

    scanf("%d %d",&hour,&minute);

    if (hour >=6 && hour <=12 && minute >=1 && minute <=60) {
        printf("Morning\n");
    }
    else if (hour >=13 && hour <17){
        printf("Afternoon:\n");
    }
    else if (hour >17 && hour <20){
        printf("EvenNight\n");
    }
    else{
        printf("Night\n");
    }

}

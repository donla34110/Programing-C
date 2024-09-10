#include <stdio.h>

int main(){

    int summary,text;

    printf("enter your money:");
    scanf("%d",&summary);

    if (summary >= 50000){
        text = summary * 0.20;
    }else if (summary >= 30000){
        text = summary * 0.10;

    }else{
        text =0;
    }
    printf("Tax to pay:%d",text);
    return 0;
}
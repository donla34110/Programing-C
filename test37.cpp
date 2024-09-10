#include <stdio.h>
#include <string.h>

int main (){
    int  number;
    char sex[20];


    printf("Enter your age:");
    scanf("%d",&number);
    printf("Enter your sex:");
    scanf("%s",sex);


    if (number< 18 && strcmp(sex,"woman") ==0 ){
        printf("Girl:\n");
        
    }else if (number>=18 && strcmp(sex, "woman") == 0){
        printf("Woman\n");
    }else if (number < 18 && strcmp(sex, "man") == 0) {
        printf("Boy\n");
    } else if (number >= 18 && strcmp(sex, "man") == 0) {
        printf("Man\n");
    } else {
        printf("Invalid input\n");
    }
    



    return 0;
}

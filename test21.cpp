#include <stdio.h>

int main(){
    int num,originalnum, reversnum = 0 , remainber;//ส่วนที่เหลือ

    printf("Enter an integer:");

    scanf("%d",&num);

    originalnum = num;

    while (num !=0 ){
        remainber = num % 10;
        reversnum = reversnum * 10 + remainber;
        num = num /10;


    }
    if (originalnum == reversnum){
        printf("%d is a palindrome\n",originalnum);

    }
    else{
        printf("%d is a not paindorme\n",originalnum);

    }


    return 0;

}
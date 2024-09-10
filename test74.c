#include <stdio.h>

int main(){
    int anwers = 45;//คำตอบที่ ถูกต้อง
    int guess;//เก็บค้าทายจากผู้ใช้
    int attempt = 0; //เก็บจำนวนครั้งที่ทาย

    printf("=== Wecome to the Nunber Guessing Game === \n");
    printf("Try to guess the correnct nunber !\n\n");

    do{
        printf("Enter your guess :");
        scanf("%d",&guess);//รับค่าจากผู้ใช้ที่ทาย
        attempt++;//นับจำนวนครั้งที่ผู้ใช้ทาย

        //ตรวจสอบค่า ทายถูกหรือไม่
        if(guess > anwers){
            printf("Too hight ! Try again!.\n");
        }else if(guess < anwers){
            printf("Too Low ! Try again!.\n");
        }else{
            printf("Congratulation! You guess the Corrent number in %d attemp.\n",attempt);
        }

        
    }while(guess != anwers);

    return 0;

}
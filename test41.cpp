#include <stdio.h>


int main (){
    int number, primers = 1;

    printf("Enter a num:");

    scanf("%d",&number);

// การเขียน code ต้องเข้าใจ บริบทก่อน ของส่วนประกอบต่างๆก่อนๆ
    if (number <= 1){
        primers = 0;
    }else{

        for (int i= 2; i <= number / 2 ; i++){
            if (number % i == 0 ){//ลปจะไม่เปลี่ยรนค่า pribmers =1
                primers = 0;
                break;
            }
        }
    }

    if(primers = 1){

        printf("%d id a primers number .\n",number);

    }else {
        printf("%d is a  primers mumber . \n",number);
        
    }


    return 0;
}


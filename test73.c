#include <stdio.h>
#include <string.h>

int main (){
    char name[100][34];
    int count = 1; // เก็บจพนวนนักศึกษา
    int choice; //ตัวเลือกผู้ใช้ 1 เพื่อรับชื่อต่อ, 0 เพื่อหยุด


    while(count !=0 ){
        printf("Enter the name of student %d:",count);
        fgets(name[count],100,stdin);
        name[count][strcspn(name[count], "\n")] = 0;
        count++;
        printf("Press 1 to continue entering names, or  0  to stop:");
        scanf("%d",&choice);
        getchar();

        if(choice == 0 ){
            break;
        }

    }

    printf("\nList of student name :\n");
    for(int i = 1 ; i <= count; i+=1){
        printf("Student %d : %s \n",i,name[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char **name = NULL;
    char input[50];
    int count = 0;
    int choice;

    do{
        //ขอพื้นที่สำหรับดหน่วยความจำสำหรับชื่อไหม่
        name = realloc(name,(count + 1) * sizeof(char*));
        if(name == NULL){
            printf("Memory alloction failed!\n");
            return 1;
        }

        //รัยชื่อนักศึกษา
        printf("Enter the name of student %d:",count + 1);
        fgets(input,50,stdin);
        //ลบชื่อ  newline ออกจากชื่อที่รับจาก fgets
        input[strcspn(input, "\n")] = '\0';

        name[count] = malloc(strlen(input)+ 1);
        if(name[count] == NULL){
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(name[count], input);

        count++;

        printf("Press 1 to continue entering name , or 0 to stop:");
        scanf("%d",&choice);
        getchar();
    }while(choice != 0);

    printf("\nLinst of student name:\n");

    for(int i = 0 ; i <= count; i=i+1){
        printf("Student %d: %s\n",i + 1,name[i]);
        free(name[i]);
    }

    free(name);

    return 0;
}
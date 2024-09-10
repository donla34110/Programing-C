#include <stdio.h>

int main (){
    char name[10][50];
    int i = 1;
    while (i <= 10){
        printf("Enter name of student %d: ",i);
        fgets(name[i],50,stdin);
        i++;
    }
    i=0;
    printf("\nList of student name:\n");
    while( i < 10){
        printf("Stdent %d : %s ",i + 1,name[i]);
        i++;
    }
    return 0;
}
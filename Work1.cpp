#include <stdio.h>

int main() {
  char fname[100];
  char lname[100];
  char numberID[100];
  char oldScholl[100];
  
  printf("Enter your fname:");
  scanf("%s", fname);
  printf("Enter your lname:");
  scanf("%s", lname);
  printf("Enter your numberID:");
  scanf("%s",numberID);
  printf("Enter your old Scholl:");
  scanf("%s\n", oldScholl);

  
  printf("your fname is: %s\n", fname);
  printf("your lname is: %s\n", lname);
  printf("your numberID: %s\n", numberID);
  printf("your old Scholl: %s\n", oldScholl);
  return 0;
}








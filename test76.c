#include <stdio.h>

int main (){
    int arr[100];
    int number,temp;

    printf("Enter nunber of number");
    scanf("%d",&number);


  int i =0;
  for(;i < number;i++){
    printf("Enter element %d : ",i + 1);
    scanf("%d",&arr[i]);
  }
  for(int i = 0 ; i < number / 2; i++){
    temp = arr[i];
    arr[i] = arr[number - i - 1];
    arr[number - i - 1] = temp;
  }
  printf("Arry after swapping");
  for(int i = 0; i < number; i++){
    printf("%d",arr[i]);


  }
  printf("\n");
  return 0;
}
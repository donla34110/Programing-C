// #include <stdio.h>

// int main (){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for (int i = 1; i <3;i+=1){

//         for(int j = 0 ; j < 3 ;j++){
//             if (arr[i][j] > 5) {
//                 printf("%d\t", arr[i][j]);
//             }
//         }
//        printf("\n");
//     } 
   
//     return 0;
// }

// #include <stdio.h>

// int main (){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for (int i = 0; i <3;i+=1){

//         for(int j = 0 ; j < 3 ;j++){
//             if (arr[i][j] % 2 !=0) {
//                 printf("%d\t", arr[i][j]);
//             }
//         }
//        printf("\n");
//     } 
   
//     return 0;
// }

// #include <stdio.h>

// int main (){
//     int sum = 0;
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for (int i = 0; i <3;i+=1){
//         for(int j = 0 ; j < 3 ;j++){
//             sum += arr[i][j];
//             printf("%d\t",sum);
//         }
//        printf("\n");
//     } 
//     printf("\nSum of numbers greater than 5: %d\n", sum);
   
//     return 0;
// }

// #include <stdio.h>

// int main (){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for (int i = 0; i <3;i+=1){
//         int row_sum =0;
//         printf("%d",i + 1);
//         for(int j = 0 ; j < 3 ;j++){
//             row_sum += arr[i][j];
//             printf("%d\t",row_sum);
//         }
//         printf("| Sum of row %d: %d\n", i + 1, row_sum);
//     } 
    
   
//     return 0;
// }

#include <stdio.h>

int main (){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 2; i >=0;i--){

        for(int j = 2 ; j >= 0 ;j--){
            printf("%d\t",arr[j][i]);
        }
       printf("\n");
    } 
   
    return 0;
}




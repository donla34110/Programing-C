#include <stdio.h>
#include <math.h>

int check_number(int num) {
    int sum = 0, original_num = num;
    while (num != 0) {
        int digit = num % 10;  
        sum += pow(digit, 4);  
        num /= 10;  
    }
    return sum == original_num;  
}
void matrix_add(int A[2][3], int B[2][3], int result[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}
void matrix_subtract(int A[2][3], int B[2][3], int result[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}
void print_matrix(int matrix[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    
    int A[2][3] = {
        {1, 0, -1},
        {-2, 3, 2}
    };

    int B[2][3] = {
        {0, 1, 3},
        {4, -1, -3}
    };

    int result[2][3];

    printf("A + B:\n");
    matrix_add(A, B, result);
    print_matrix(result);

    printf("\nA - B:\n");
    matrix_subtract(A, B, result);
    print_matrix(result);

    printf("\nNumbers that satisfy the condition (0-9999):\n");
    for (int i = 0; i <= 9999; i++) {
        if (check_number(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= num; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}

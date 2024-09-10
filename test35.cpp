#include <stdio.h>

int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    int first = num / 100;
    int second = (num / 10) % 10;
    int third = num % 10;

    if (first == second || second == third || first == third) {
        printf("Contains double numbers\n");
    } else {
        printf("Does not contain double numbers\n");
    }
    return 0;
}
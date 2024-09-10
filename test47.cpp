#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) {
        sum += n % 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}

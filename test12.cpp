#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
    printf("Maximum value: %d\n", max);
    return 0;
}


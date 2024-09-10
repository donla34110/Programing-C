#include <stdio.h>

int main() {
    int years, months, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("Enter the number of months: ");
    scanf("%d", &months);

    days = (years * 365) + (months * 30);

    printf("Total number of days: %d days\n", days);

    return 0;
}


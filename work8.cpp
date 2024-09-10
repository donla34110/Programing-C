#include <stdio.h>

int main() {
    int amount;
    int thousand, fiveHundred, hundred;

    // ????????????????
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &amount);

    // ????????????????
    thousand = amount / 1000;
    amount = amount % 1000;

    fiveHundred = amount / 500;
    amount = amount % 500;

    hundred = amount / 100;
    amount = amount % 100;

    // ???????????
    printf("1000 x %d | 500 x %d | 100 x %d\n", thousand, fiveHundred, hundred);

    return 0;
}


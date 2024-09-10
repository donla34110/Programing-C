#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int max, min;

    printf("number 1 - 5 \n");
  
    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter number 3: ");
    scanf("%d", &c);

    printf("Enter number 4: ");
    scanf("%d", &d);

    printf("Enter number 5: ");
    scanf("%d", &e);

    
    if (a > b && a > c && a > d && a > e) {
        max = a;
    } else if (b > a && b > c && b > d && b > e) {
        max = b;
    } else if (c > a && c > b && c > d && c > e) {
        max = c;
    } else if (d > a && d > b && d > c && d > e) {
        max = d;
    } else {
        max = e;
    }

    
    if (a < b && a < c && a < d && a < e) {
        min = a;
    } else if (b < a && b < c && b < d && b < e) {
        min = b;
    } else if (c < a && c < b && c < d && c < e) {
        min = c;
    } else if (d < a && d < b && d < c && d < e) {
        min = d;
    } else {
        min = e;
    }

    
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}


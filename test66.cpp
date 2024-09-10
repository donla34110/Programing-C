#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of times to display 'rmutto': ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("rmutto\n");
    }

    return 0;
}

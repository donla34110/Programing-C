#include <stdio.h>

int main() {
    int arr[100], n, sorted = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1 ; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted ==1)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is not sorted.\n");

    return 0;
}

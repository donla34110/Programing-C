#include <stdio.h>

int main() {
    int S1, S2;

    // รับค่าจากผู้ใช้
    printf("Input S1: ");
    scanf("%d", &S1);
    printf("Input S2: ");
    scanf("%d", &S2);

    // ตรวจสอบเงื่อนไขตาม Flowchart
    if (S1 == 0 && S2 == 0) {
        printf("Output: Restart\n");
    } else if (S1 == 1 && S2 == 0) {
        printf("Output: New question\n");
    } else if (S1 == 0 && S2 == 1) {
        printf("Output: Check answer\n");
    } else {
        printf("No valid condition met.\n");
    }

    return 0;
}

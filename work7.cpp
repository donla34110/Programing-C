#include <stdio.h>

int main() {
    int numbers[5];
    int max, min;

    // รับค่าตัวเลข 5 ค่า
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // กำหนดค่าเริ่มต้นของ max และ min เป็นค่าของตัวเลขตัวแรก
    max = numbers[0];
    min = numbers[0];

    // หาค่ามากที่สุดและน้อยที่สุด
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // แสดงผลลัพธ์
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}


#include <stdio.h>
#include <math.h> // ใช้สำหรับการคำนวณยกกำลัง

int main() {
    // ประกาศตัวแปร
    float x, y, result1, result2;

    // รับค่าตัวแปรจากผู้ใช้
    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of y: ");
    scanf("%f", &y);

    // คำนวณโจทย์ที่ 1: x / (2 * y)
    result1 = x / (2 * y);

    // คำนวณโจทย์ที่ 2: x^2 * y^3
    result2 = pow(x, 2) * pow(y, 3);

    // แสดงผลลัพธ์
    printf("1. x / (2 * y) = %.2f\n", result1);
    printf("2. x^2 * y^3 = %.2f\n", result2);

    return 0;
}

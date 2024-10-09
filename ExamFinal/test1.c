#include <stdio.h>

int main() {
    float base, height, area;

    // รับค่าฐาน
    printf("ENTER Base(cm.)= ");
    scanf("%f", &base);

    // รับค่าสูง
    printf("ENTER Height(cm.)= ");
    scanf("%f", &height);

    // คำนวณพื้นที่ของสามเหลี่ยม
    area = 0.5 * base * height;

    // แสดงผลลัพธ์
    printf("Are = %.3f cm2\n", area);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 2.275;
    int b = 37;
    printf("num1 : %.1f\n", a);  // แสดงผล a ด้วยจุดทศนิยม 1 ตำแหน่ง
    printf("num2 : %d\n", b * 2 + 6);  // คำนวณ b แล้วแสดงผล
    printf("num3 : %f\n", a * b);  // แสดงผลการคูณของ a และ b
    printf("num4 : %d\n", b % 5);  // แสดงผลการหารเอาเศษของ b
    system("pause");
    return 0;
}

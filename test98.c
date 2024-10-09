#include <stdio.h>

int main() {
    char current_input[100];
    char previous_input[100] = "";  // ข้อความเริ่มต้น
    int current_length, previous_length = 0, i;
    char ch;

    do {
        printf("Enter a string: ");
        
        // อ่านข้อความจากผู้ใช้ทีละตัวอักษร
        i = 0;
        while (1) {
            ch = getchar();
            if (ch == '\n' || i >= 99) {  // จบการอ่านเมื่อเจอ '\n' หรือเกินขนาดของอาร์เรย์
                current_input[i] = '\0';  // ใส่เครื่องหมายจบสตริง
                break;
            }
            current_input[i] = ch;
            i++;
        }

        // คำนวณความยาวของข้อความที่ป้อนเข้ามา
        current_length = i;

        // ตรวจสอบเงื่อนไขความยาวของข้อความ
        if (current_length < previous_length) {
            break;  // หยุดเมื่อข้อความใหม่สั้นกว่าข้อความก่อนหน้า
        }

        // เก็บค่าข้อความปัจจุบันไว้เป็นข้อความก่อนหน้า
        for (i = 0; i < current_length; i++) {
            previous_input[i] = current_input[i];
        }
        previous_input[current_length] = '\0';  // ใส่เครื่องหมายจบสตริง
        previous_length = current_length;

    } while (1);  // ทำซ้ำไปเรื่อย ๆ จนกว่าจะพบเงื่อนไขหยุด

    printf("Program terminated because the string length is shorter than the previous string.\n");

    return 0;
}

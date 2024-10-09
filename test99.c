#include <stdio.h>
#include <conio.h>  // สำหรับ getch() และ kbhit()

int main() {
    int x = 0, y = 0;
    char input;

    printf("เริ่มต้นที่ตำแหน่ง x = %d, y = %d\n", x, y);
    printf("กรุณากด a (ซ้าย), w (ขึ้น), s (ลง), d (ขวา) หรือ 0 เพื่อหยุด\n");

    do {
        if (kbhit()) {  // ตรวจสอบว่ามีการกดแป้นพิมพ์หรือไม่
            input = getch();  // รับค่าจากแป้นพิมพ์ทันทีโดยไม่ต้องกด Enter

            switch (input) {
                case 'a':
                    x -= 1;  // เลื่อนซ้าย
                    break;
                case 'w':
                    y += 1;  // เลื่อนขึ้น
                    break;
                case 's':
                    y -= 1;  // เลื่อนลง
                    break;
                case 'd':
                    x += 1;  // เลื่อนขวา
                    break;
                case '0':
                    printf("จบการทำงาน\n");
                    break;
                default:
                    printf("กดปุ่มไม่ถูกต้อง\n");
            }

            if (input != '0') {
                printf("ตำแหน่งปัจจุบัน: x = %d, y = %d\n", x, y);
            }
        }
    } while (input != '0');  // ลูปจนกว่าจะกด 0

    return 0;
}

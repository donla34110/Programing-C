#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer, input, check = 0;
    FILE *pF_data;
    
    // เปิดไฟล์เพื่ออ่านค่า
    pF_data = fopen("target.txt", "r+"); // เปิดไฟล์สำหรับอ่านค่าคำตอบจากไฟล์
    

    char buffer[100];
    fgets(buffer, 100, pF_data); // อ่านบรรทัดแรกที่เป็นหัวข้อ
    fscanf(pF_data, "%d", &answer); // อ่านค่าคำตอบจากไฟล์
    fclose(pF_data); // ปิดไฟล์

    do {
        system("cls"); // ล้างหน้าจอ
        printf("Enter number (1-100) : "); // แสดงข้อความให้ผู้ใช้ใส่ค่า
        scanf("%d", &input); // รับค่าจากผู้ใช้

        // เปรียบเทียบค่าที่ผู้ใช้ใส่กับคำตอบในไฟล์
        if (input < answer) {
            printf("[Your lost!] your number < answer.\n");
        }
        else if (input > answer) {
            printf("[Your lost!] your number > answer.\n");
        }
        else {
            printf("[Your Win!]\n");
            check = 1; // ออกจากลูปเมื่อทายถูก
        }

        system("pause"); // รอให้ผู้ใช้กดปุ่มก่อนดำเนินการต่อ
    } while (check == 0 ); // ลูปจนกว่าจะทายถูก

    return 0;
}

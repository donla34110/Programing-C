// #include <stdio.h>

// int main ()
// {
//     int r, num[20], c = 0, sum = 0;
//     FILE *pF_data;
//     pF_data = fopen("data1.txt", "r+");  // เปิดไฟล์สำหรับอ่านข้อมูล

//     char buffer[100];
//     fgets(buffer, 100, pF_data); // ข้ามหัวข้อในไฟล์
//     printf("----- Data -----\n");
    
//     // วนลูปอ่านข้อมูลจากไฟล์จนกว่าจะเจอ EOF
//     while ((r = fscanf(pF_data, "%d", &num[c])) != EOF) {
//         printf("%d ", num[c]); // แสดงผลข้อมูลแต่ละตัวที่อ่านได้
//           // เพิ่มตัวชี้ตำแหน่งในอาร์เรย์
//     }

//     fclose(pF_data); // ปิดไฟล์
//     printf("\nSum = %d\n", sum); // แสดงผลรวม
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int r, num[20], c=0,sum=0;
    FILE *pF_data;
    pF_data = fopen ("data1.txt","r+");
    char buffer[100];
    fgets(buffer, 100, pF_data);
    r = fscanf (pF_data, "%d", &num[c]);
    printf("----- Data -----\n");
    while ((r = fscanf(pF_data, "%d", &num[c])) != EOF) {
        printf("%d ", num[c]); // แสดงผลข้อมูลแต่ละตัวที่อ่านได้
         // เพิ่มตัวชี้ตำแหน่งในอาร์เรย์
    }
    
    // if(r != EOF){
    //    printf("----- Data -----\n");
    //    printf("%d",num[c]);
    // }else{
    //     printf("----- Not Found Data -----\n");
    // }

    return 0;
}
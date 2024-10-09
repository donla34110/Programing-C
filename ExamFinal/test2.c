#include <stdio.h>

int main() {
    float original_price, discount, final_price;

    // รับค่าราคาสินค้าก่อนลดราคา
    printf("Enter the original price of the product: ");
    scanf("%f", &original_price);

    // คำนวณส่วนลด 30%
    discount = original_price * 0.30;

    // คำนวณราคาสินค้าหลังจากลดแล้ว
    final_price = original_price - discount;

    // แสดงราคาที่ต้องจ่ายจริง
    printf("The final price after 30%% discount is: %.2f\n", final_price);

    return 0;
}

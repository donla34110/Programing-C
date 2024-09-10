#include <stdio.h>

int main() {
   
    for (int i = 1; i <= 200; i++) {
        if (i % 2 != 0) {  // ตรวจสอบว่าเป็นเลขคี่
            printf("%d ", i);
        }
    }

    printf("\n");  
    return 0;
}
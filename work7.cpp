#include <stdio.h>

int main() {
    int numbers[5];
    int max, min;

    // �Ѻ��ҵ���Ţ 5 ���
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // ��˹����������鹢ͧ max ��� min �繤�Ңͧ����Ţ����á
    max = numbers[0];
    min = numbers[0];

    // �Ҥ���ҡ����ش��й��·���ش
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // �ʴ����Ѿ��
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}


#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>




char tmp_map[18][32];

char map[18][32] = {
    "+#############################+",
    "|                             |",
    "|                             |",
    "|## ########### ##   #########|",
    "|   |                         |",
    "| | |### |  |           |     |",
    "| |      |  | |###  |   |  |  |",
    "| | #####|  | |      ## |     |",
    "| |           |###  |      |  |",
    "| |##### ###         ##       |",
    "|          ######  ####### ###|",
    "|                             |",
    "|# ### ####      ###   #######|",
    "|                             |",
    "|                             |",
    "|                             |",
    "|                             |",
    "+#############################+"};

void ShowMap() {
    for (int i = 0; i < 18; i++) {
        printf("%s\n", map[i]);
    }
}

void gotoxy(short x, short y) {
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};

    SetConsoleCursorPosition(hStdout, position);
}

// �ѧ��ѹ����Ѻ��äǺ����������͹�����ǹ͹
void move_x(int *x, int y, int p) {
    if (map[y][*x + p] == ' ') {
        *x += p;
    }
}

// �ѧ��ѹ����Ѻ��äǺ����������͹�����ǵ��
void move_y(int x, int *y, int p) {
    if (map[*y + p][x] == ' ') {
        *y += p;
    }
}

// �Ҵ����Ф÷����˹� x, y
void draw(int x, int y, char symbol) {
    gotoxy(x, y);
    printf("%c", symbol);
}

int walk_queue_x[1000];  // ��ǡ������͹��� x
int walk_queue_y[1000];  // ��ǡ������͹��� y
int walk_queue_size = 0;

void AddArray(int x, int y, int *queue_size) {
    if (tmp_map[y][x] == ' ' || tmp_map[y][x] == '.') {
        tmp_map[y][x] = '#';  // ��ͧ�ѹ�����͹��Ѻ����鹷ҧ���
        walk_queue_x[*queue_size] = x;
        walk_queue_y[*queue_size] = y;
        (*queue_size)++;
    }
}

void FindPath(int sx, int sy, int x, int y) {
    memcpy(tmp_map, map, sizeof(map));
    walk_queue_size = 0;

    int queue_x[1000], queue_y[1000], queue_size = 0;
    int walk_count[1000], back[1000];
    int queue_back = 0;

    queue_x[queue_size] = sx;
    queue_y[queue_size] = sy;
    walk_count[queue_size] = 0;
    back[queue_size] = -1;
    queue_size++;

    int i = 0;
    while (i < queue_size) {
        if (queue_x[i] == x && queue_y[i] == y) {
            walk_queue_size = 0;
            while (walk_count[i] != 0) {
                walk_queue_x[walk_queue_size] = queue_x[i];
                walk_queue_y[walk_queue_size] = queue_y[i];
                walk_queue_size++;
                i = back[i];
            }
            break;
        }

        AddArray(queue_x[i] + 1, queue_y[i], &queue_size);
        AddArray(queue_x[i] - 1, queue_y[i], &queue_size);
        AddArray(queue_x[i], queue_y[i] + 1, &queue_size);
        AddArray(queue_x[i], queue_y[i] - 1, &queue_size);
        i++;
    }
}

int main() {
    bool running = 1;
    int x = 15; // ���˹觢ͧ����� x
    int y = 16; // ���˹觢ͧ����� y
    int old_x;
    int old_y;

    int ex = 1;  // ���˹觢ͧ�ѵ�� x
    int ey = 1;  // ���˹觢ͧ�ѵ�� y

    int pts = 0;

    printf("Instruction:\n1. Arrow Keys to move your hero\n2. Eat the dots produced by the Eater to gain points\n3. Don't get caught by the Eater\n\n");
    printf("H -> Hard\nN -> Normal\nE -> Easy\n\nInput : ");

    char diffi;
    int speedmod = 3;

    scanf(" %c", &diffi);

    if (diffi == 'N') {
        speedmod = 2;
    } else if (diffi == 'H') {
        speedmod = 1;
    }

    system("cls");
    ShowMap();

    gotoxy(x, y);
    printf("H");

    int frame = 0;

    FindPath(ex, ey, x, y);

    while (running) {
        gotoxy(x, y);
        printf(" ");

        old_x = x;
        old_y = y;

        if (GetAsyncKeyState(VK_UP)) {
            if (map[y - 1][x] == '.') {
                y--;
                pts++;
            } else if (map[y - 1][x] == ' ') {
                y--;
            }
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            if (map[y + 1][x] == '.') {
                y++;
                pts++;
            } else if (map[y + 1][x] == ' ') {
                y++;
            }
        }
        if (GetAsyncKeyState(VK_LEFT)) {
            if (map[y][x - 1] == '.') {
                x--;
                pts++;
            } else if (map[y][x - 1] == ' ') {
                x--;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            if (map[y][x + 1] == '.') {
                x++;
                pts++;
            } else if (map[y][x + 1] == ' ') {
                x++;
            }
        }

        if (old_x != x || old_y != y) {
            FindPath(ex, ey, x, y);
        }

        gotoxy(x, y);
        printf("H");

        map[ey][ex] = '.';
        gotoxy(ex, ey);
        printf(".");

        if (frame % speedmod == 0 && walk_queue_size != 0) {
            ex = walk_queue_x[--walk_queue_size];
            ey = walk_queue_y[walk_queue_size];
        }

        gotoxy(ex, ey);
        printf("E");

        if (ex == x && ey == y) {
            break;
        }

        gotoxy(32, 18);
        gotoxy(32, 1);
        printf("%d", pts);
        Sleep(100);
        frame++;
    }

    system("cls");
    printf("You Lose and your score is : %i", pts);
    getchar();
    getchar();
    return 0;
}


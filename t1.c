#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>

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

struct entity {
    int x;
    int y;
};

void move_x(struct entity *e, int p) {
    if (map[e->y][e->x + p] == ' ') e->x += p;
}

void move_y(struct entity *e, int p) {
    if (map[e->y + p][e->x] == ' ') e->y += p;
}

void draw(struct entity *e, char p) {
    map[e->x][e->y] = p;
    gotoxy(e->x, e->y);
    printf("%c", p);
}

struct walk {
    short walk_count;
    short x;
    short y;
    short back;
};

struct target {
    short x;
    short y;
};

struct walk BFSArray[100];
int BFSCount = 0;
struct target walk_queue[100];
int walkQueueCount = 0;

void AddArray(int x, int y, int wc, int back) {
    if (tmp_map[y][x] == ' ' || tmp_map[y][x] == '.') {
        tmp_map[y][x] = '#';
        BFSArray[BFSCount].x = x;
        BFSArray[BFSCount].y = y;
        BFSArray[BFSCount].walk_count = wc;
        BFSArray[BFSCount].back = back;
        BFSCount++;
    }
}

void FindPath(int sx, int sy, int x, int y) {
    memcpy(tmp_map, map, sizeof(map));
    BFSCount = 0;
    walkQueueCount = 0;

    BFSArray[BFSCount].x = sx;
    BFSArray[BFSCount].y = sy;
    BFSArray[BFSCount].walk_count = 0;
    BFSArray[BFSCount].back = -1;
    BFSCount++;

    int i = 0;
    while (i < BFSCount) {
        if (BFSArray[i].x == x && BFSArray[i].y == y) {
            walkQueueCount = 0;
            while (BFSArray[i].walk_count != 0) {
                walk_queue[walkQueueCount].x = BFSArray[i].x;
                walk_queue[walkQueueCount].y = BFSArray[i].y;
                walkQueueCount++;
                i = BFSArray[i].back;
            }
            break;
        }
        AddArray(BFSArray[i].x + 1, BFSArray[i].y, BFSArray[i].walk_count + 1, i);
        AddArray(BFSArray[i].x - 1, BFSArray[i].y, BFSArray[i].walk_count + 1, i);
        AddArray(BFSArray[i].x, BFSArray[i].y + 1, BFSArray[i].walk_count + 1, i);
        AddArray(BFSArray[i].x, BFSArray[i].y - 1, BFSArray[i].walk_count + 1, i);
        i++;
    }
}

int main() {
    bool running = true;
    int x = 15;  // hero x
    int y = 16;  // hero y
    int old_x, old_y;

    int ex = 1;
    int ey = 1;

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

        if (frame % speedmod == 0 && walkQueueCount != 0) {
            ex = walk_queue[walkQueueCount - 1].x;
            ey = walk_queue[walkQueueCount - 1].y;
            walkQueueCount--;
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
    printf("You Lose and your score is : %d", pts);
    getchar();
    getchar();

    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
#define MAX_PLAYERS 10
#define MAX_LIVES 3

HANDLE console;
COORD CursorPosition;

typedef struct {
    char name[30];
    int score;
    float timePlayed; // เวลาที่เล่น
} Player;

Player leaderboard[MAX_PLAYERS]; // สถิติของผู้เล่น
int playerCount = 0;

int enemyY[5];
int enemyX[5];
int enemyFlag[5];
char car[4][4] = { ' ','#','#',' ',
                   '#','#','#','#',
                   ' ','#','#',' ',
                   '#','#','#','#' };

int carPos = WIN_WIDTH / 2;
int score = 0;
int lives = MAX_LIVES; // จำนวนชีวิต
int speed = 100; // ความเร็วเริ่มต้น
int level = 1; // เลเวลของเกม

char playerName[30]; // ชื่อผู้เล่น
int itemX, itemY; // ตำแหน่งของไอเท็ม
int hasItem = 0; // ผู้เล่นมีไอเท็มหรือไม่

// ฟังก์ชันสำหรับการตั้งค่า console
void gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

void setcursor(int visible, DWORD size) {
    if (size == 0)
        size = 20;

    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}

// ฟังก์ชันวาดขอบจอ
void drawBorder() {
    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        for (int j = 0; j < 17; j++) {
            gotoxy(0 + j, i);
            printf("#");
            gotoxy(WIN_WIDTH - j, i);
            printf("#");
        }
    }
    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        gotoxy(SCREEN_WIDTH, i);
        printf("#");
    }
}

// ฟังก์ชันสร้างศัตรู
void genEnemy(int ind) {
    enemyX[ind] = 17 + rand() % 33;
}

// ฟังก์ชันวาดศัตรู
void drawEnemy(int ind) {
    if (enemyFlag[ind] == 1) {
        gotoxy(enemyX[ind], enemyY[ind]);
        printf("****");
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        printf(" ** ");
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        printf("****");
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        printf(" ** ");
    }
}

// ฟังก์ชันลบศัตรูออกจากจอ
void eraseEnemy(int ind) {
    if (enemyFlag[ind] == 1) {
        gotoxy(enemyX[ind], enemyY[ind]);
        printf("    ");
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        printf("    ");
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        printf("    ");
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        printf("    ");
    }
}

// รีเซ็ตตำแหน่งศัตรู
void resetEnemy(int ind) {
    eraseEnemy(ind);
    enemyY[ind] = 1;
    genEnemy(ind);
}

// ฟังก์ชันวาดรถของผู้เล่น
void drawCar() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            gotoxy(j + carPos, i + 22);
            printf("%c", car[i][j]);
        }
    }
}

// ฟังก์ชันลบรถออกจากจอ
void eraseCar() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            gotoxy(j + carPos, i + 22);
            printf(" ");
        }
    }
}

// ฟังก์ชันวาดไอเท็มบนจอ
void drawItem() {
    if (!hasItem) {
        gotoxy(itemX, itemY);
        printf("S"); // ไอเท็ม S สำหรับสปีด
    }
}

// ฟังก์ชันลบไอเท็มออกจากจอ
void eraseItem() {
    gotoxy(itemX, itemY);
    printf(" ");
}

// ฟังก์ชันสร้างตำแหน่งไอเท็มใหม่
void genItem() {
    itemX = 17 + rand() % 33;
    itemY = 1;
}

// ฟังก์ชันตรวจสอบการเก็บไอเท็ม
int checkItem() {
    return (itemY >= 22 && carPos <= itemX && carPos + 4 >= itemX);
}

// ฟังก์ชันสำหรับตรวจสอบการชน
int collision() {
    for (int i = 0; i < 5; i++) { // ตรวจสอบทุกศัตรู
        if (enemyFlag[i] == 1 && enemyY[i] + 4 >= 23) {
            if (enemyX[i] + 4 - carPos >= 0 && enemyX[i] + 4 - carPos < 9) {
                return 1;
            }
        }
    }
    return 0;
}

// ฟังก์ชันแสดงเกมโอเวอร์
void gameover() {
    system("cls");
    printf("\n");
    printf("\t\t--------------------------\n");
    printf("\t\t-------- Game Over -------\n");
    printf("\t\t--------------------------\n\n");
    printf("\t\tPress any key to go back to menu.");
    getch();
}

// ฟังก์ชันอัพเดตคะแนนและการแสดงผลหลอดเลือด
void updateStats() {
    gotoxy(WIN_WIDTH + 7, 5);
    printf("Score: %d\n", score);
    gotoxy(WIN_WIDTH + 7, 7);
    printf("Lives: %d\n", lives);
}

// ฟังก์ชันแสดงคำแนะนำการเล่น
void instructions() {
    system("cls");
    printf("Instructions\n");
    printf("----------------\n");
    printf(" Avoid Cars by moving left or right.\n");
    printf("\n Press 'a' to move left");
    printf("\n Press 'd' to move right");
    printf("\n Press 's' to speed up");
    printf("\n Press 'escape' to exit");
    printf("\n\nPress any key to go back to menu");
    getch();
}

// ฟังก์ชันการเล่นหลัก
void play() {
    carPos = WIN_WIDTH / 2;
    score = 0;
    lives = MAX_LIVES;
    int start_time = time(0); // เก็บเวลาที่เริ่มเล่น
    speed = 100; // รีเซ็ตความเร็วกลับเป็นค่าเริ่มต้นทุกครั้งที่เริ่มเกมใหม่
    enemyFlag[0] = 1;
    for (int i = 1; i < 5; i++) {
        enemyFlag[i] = 0;
        enemyY[i] = 1;
    }

    hasItem = 0; // เริ่มเกมยังไม่มีไอเท็ม
    genItem(); // สร้างไอเท็ม

    system("cls");
    drawBorder();
    updateStats();
    genEnemy(0);

    while (lives > 0) {
        if (kbhit()) {
            char ch = getch();
            if (ch == 'a' || ch == 'A') {
                if (carPos > 18)
                    carPos -= 4;
            } else if (ch == 'd' || ch == 'D') {
                if (carPos < 50)
                    carPos += 4;
            } else if (ch == 's' || ch == 'S') {
                speed -= 10; // เพิ่มความเร็วเมื่อกด S
            } else if (ch == 27) {
                break;
            }
        }

        drawCar();
        for (int i = 0; i < 5; i++) {
            drawEnemy(i);
        }
        if (collision() == 1) {
            lives--; // ถ้าชนให้ลบหลอดเลือด
            updateStats();
        }
        if (checkItem()) {
            hasItem = 1; // เก็บไอเท็มได้
            speed -= 20; // ลดสปีดเพิ่มความเร็ว
        }
        Sleep(speed); // ใช้ความเร็วที่มีการปรับตามเวลา
        eraseCar();
        for (int i = 0; i < 5; i++) {
            eraseEnemy(i);
        }
        eraseItem();

        if (enemyY[0] == 10 && enemyFlag[1] == 0)
            enemyFlag[1] = 1;

        for (int i = 0; i < 5; i++) {
            if (enemyFlag[i] == 1) {
                enemyY[i] += 1;
            }
            if (enemyY[i] > SCREEN_HEIGHT - 4) {
                resetEnemy(i);
                score++;
                updateStats();
                
                // เพิ่มความเร็วเมื่อได้คะแนนทุก 10 แต้ม
                if (score % 10 == 0) {
                    speed -= 2; // เพิ่มความเร็วเล็กน้อย
                }
            }
        }
        if (!hasItem) {
            drawItem(); // วาดไอเท็มถ้ายังไม่ได้เก็บ
        }
        itemY++;
        if (itemY > SCREEN_HEIGHT - 4) {
            genItem(); // สร้างไอเท็มใหม่ถ้าเลยขอบจอ
        }
    }

    int end_time = time(0); // เวลาจบ
    leaderboard[playerCount].timePlayed = difftime(end_time, start_time) / 60; // คำนวณเวลาที่เล่น
    leaderboard[playerCount].score = score;
    strcpy(leaderboard[playerCount].name, playerName);
    playerCount++;

    gameover();
}

// ฟังก์ชันรับชื่อผู้เล่นก่อนเล่น
void inputPlayerName() {
    system("cls");
    printf("Enter your name: ");
    scanf("%s", playerName);
}

// ฟังก์ชันแสดงอันดับของผู้เล่น
void displayLeaderboard() {
    system("cls");
    printf("Leaderboard:\n");
    for (int i = 0; i < playerCount; i++) {
        printf("%d. %s - %d points - %.2f minutes\n", i + 1, leaderboard[i].name, leaderboard[i].score, leaderboard[i].timePlayed);
    }
    printf("\nPress any key to go back to menu.");
    getch();
}

// ฟังก์ชันเมนูหลัก
int main() {
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    setcursor(0, 0);
    srand((unsigned)time(NULL));

    do {
        system("cls");
        gotoxy(10, 5);
        printf(" -------------------------- ");
        gotoxy(10, 6);
        printf(" |        Car Game        | ");
        gotoxy(10, 7);
        printf(" --------------------------");
        gotoxy(10, 9);
        printf("1. Start Game");
        gotoxy(10, 10);
        printf("2. Instructions");
        gotoxy(10, 11);
        printf("3. Leaderboard");
        gotoxy(10, 12);
        printf("4. Quit");
        gotoxy(10, 14);
        printf("Select option: ");
        char op = getche();

        if (op == '1') {
            inputPlayerName();
            play();
        } else if (op == '2') {
            instructions();
        } else if (op == '3') {
            displayLeaderboard();
        } else if (op == '4') {
            exit(0);
        }

    } while (1);

    return 0;
}

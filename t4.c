#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char map[20][19] = {
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 2, 2, 2, 2, 2, 2, 2, 0, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 1, 0, 2, 0, 0, 2, 0, 0, 2, 0, 1, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 0, 2, 2, 2, 2, 2, 2, 2, 0, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 1, 0, 2, 0, 2, 0, 2, 0, 2, 0, 1, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 0, 2, 2, 2, 2, 2, 2, 2, 0, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 0, 2, 0, 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0},
    {0, 1, 1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 0},
    {0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

int score = 0;
int x = 9, y = 14; // player's position
int death = 0;

void show_map()
{
    system("cls"); // clear screen
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            if (i == y && j == x)
            {
                printf("P "); // player's position
            }
            else if (map[i][j] == 0)
            {
                printf("# "); // wall
            }
            else if (map[i][j] == 1)
            {
                printf(". "); // food
            }
            else if (map[i][j] == 2)
            {
                printf("  "); // empty space
            }
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
    printf("Lives: %d\n", 3 - death);
}

void move_player(char direction)
{
    if (direction == 'w' && map[y - 1][x] != 0) // up
    {
        y--;
    }
    else if (direction == 's' && map[y + 1][x] != 0) // down
    {
        y++;
    }
    else if (direction == 'a' && map[y][x - 1] != 0) // left
    {
        x--;
    }
    else if (direction == 'd' && map[y][x + 1] != 0) // right
    {
        x++;
    }

    if (map[y][x] == 1)
    {
        score++;
        map[y][x] = 2; // mark the position as empty after eating the food
    }
}

int main()
{
    char input;
    show_map();

    while (death < 3)
    {
        input = getch(); // get user input

        if (input == 'q') // quit the game
        {
            break;
        }

        move_player(input);
        show_map();

        // Check if all food has been eaten
        if (score == 150)
        {
            printf("You Win!\n");
            break;
        }
    }

    if (death == 3)
    {
        printf("Game Over!\n");
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

#define board_size 8

void Show(char c[board_size][board_size])
{
    printf("   ");
    for (int i = 0; i < board_size; i++) {
        printf(" %c", 'a' + i);
    }
    printf(" \n");

    printf("   -");
    for (int i = 0; i < board_size; i++) {
        printf("--");
    }
    printf("\n");

    for (int i = 7; i >= 0; i--) {
        printf("%d |", i + 1);
        for (int j = 0; j < board_size; j++) {
            printf(" %c", c[i][j]);
        }
        printf(" | %d \n", i + 1);
    }

    printf("   -");
    for (int i = 0; i < board_size; i++) {
        printf("--");
    }
    printf("\n");

    printf("   ");
    for (int i = 0; i < board_size; i++) {
        printf(" %c", 'a' + i);
    }
    printf("\n");
}

int main()
{
    char board[board_size][board_size]
            = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
    Show(board);
    return 0;
}
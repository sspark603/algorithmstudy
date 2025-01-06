#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 6

bool isValidMove(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

int main() {
    char input[3];
    int board[SIZE][SIZE] = {0};
    int startX, startY, prevX, prevY, x, y;
    
    scanf("%s", input);
    startX = prevX = input[0] - 'A';
    startY = prevY = input[1] - '1';
    board[prevX][prevY] = 1;

    for (int i = 1; i < 36; i++) {
        scanf("%s", input);
        x = input[0] - 'A';
        y = input[1] - '1';

        if (!isValidMove(prevX, prevY, x, y) || board[x][y]) {
            printf("Invalid\n");
            return 0;
        }

        board[x][y] = 1;
        prevX = x;
        prevY = y;
    }

    if (!isValidMove(prevX, prevY, startX, startY)) {
        printf("Invalid\n");
    } else {
        printf("Valid\n");
    }

    return 0;
}

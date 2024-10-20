#include<stdio.h>
int main() {
    int score;
    char grade[] = "FFFFFFDCBAA";

    scanf("%d", &score);
    printf("%c", grade[score/10]);

    return 0;
}

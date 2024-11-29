#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    int c = (a+b)*(a-b);

    printf("%d", c);

    return 0;


}
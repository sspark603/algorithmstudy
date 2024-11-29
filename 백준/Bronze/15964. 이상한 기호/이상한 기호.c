#include<stdio.h>

int main() {
    long a = 0;
    long b = 0;

    scanf("%ld", &a);
    scanf("%ld", &b);

    long c = (a+b)*(a-b);

    printf("%ld", c);

    return 0;


}
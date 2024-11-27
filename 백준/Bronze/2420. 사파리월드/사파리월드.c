#include<stdio.h>

 int main() {
    long N = 0;
    long M = 0;

    scanf("%ld",&N);
    scanf("%ld",&M);

    if(N-M>=0)
        printf("%ld", N-M);
    else
        printf("%ld", -(N-M));




    return 0;
}
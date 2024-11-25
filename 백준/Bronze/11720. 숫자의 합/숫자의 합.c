#include<stdio.h>

int main() {

    int N = 0;
    int P = 0;
    char num[101];
    scanf("%d\n",&N);
    scanf("%s", num);

    for(int i=0; i<N; i++) {

        P += num[i] - '0';

    }
    printf("%d", P);

    return 0;
}
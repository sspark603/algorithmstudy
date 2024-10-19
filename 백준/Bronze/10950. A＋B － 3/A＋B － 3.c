#include<stdio.h>
int main() {
    int T, A, B, C;

    scanf("%d\n", &T);
    for(int i = 0; i<T; i++) {
        scanf("%d %d\n", &A, &B);
        C = A+B;


        printf("%d\n",C);
    }

    return 0;
}

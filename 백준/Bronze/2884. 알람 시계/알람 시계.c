#include<stdio.h>

int main() {
    int H = 0;
    int M = 0;

    scanf("%d",&H);
    scanf("%d",&M);

    if (M-45>=0) {
        printf("%d %d", H, (M - 45));
    }
    else {
        int A = -(M-45);
        if(H-1>=0)
        printf("%d %d", H-1, (60 - A));
        else
            printf("%d %d", H+23, (60 - A));
    }




    return 0;
}
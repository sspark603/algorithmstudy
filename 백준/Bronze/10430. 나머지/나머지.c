#include<stdio.h>
int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int x = (A+B)%C;
    int y = ((A%C)+(B%C))%C;
    int z = (A*B)%C;
    int w = ((A%C)*(B%C))%C;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d\n", w);

    return 0;

}

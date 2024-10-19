#include<stdio.h>
int main() {
    int T, A, B, C;
    int cnt[10] = {0};
    

        scanf("%d\n", &A);
        scanf("%d\n", &B);
        scanf("%d\n", &C);
        if(100<=A<=1000 && 100<=B<=1000 && 100<=C<=1000){
            T = A*B*C;
            while (T>0) {
                cnt[T % 10]++;
                T /= 10;
            }
            for(int i = 0; i<10; i++) {
                printf("%d\n",cnt[i]);
            }
            
            


       
    }

    return 0;
}

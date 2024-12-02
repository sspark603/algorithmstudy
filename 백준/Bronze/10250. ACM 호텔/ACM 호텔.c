#include <stdio.h>

int main(void) {
    int T, H, W, N;
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &H, &W, &N);  
        int floor = N % H; 
        int room = N / H + 1; 

        if (floor == 0) { // 만약 나머지가 0이라면 꼭대기 층에 배정
            floor = H;
            room -= 1;
        }

        printf("%d%02d\n", floor, room); // 결과 출력
    }

    return 0;
}

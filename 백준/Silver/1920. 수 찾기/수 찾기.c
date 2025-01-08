//
// Created by Sang on 1/9/25.
//
#include<stdio.h>
#include<stdlib.h>

#define SIZE 100000

int compare(const void *a, const void *b) {
    if (*(int*)a > *(int*)b) return 1;
    else return -1;
}

int main() {
    int N, M, x,y;
    int A[SIZE]={0};
    int B[SIZE]={0};

    scanf("%d", & N);
    for(int i=0; i<N;i++)
        scanf("%d", &A[i]);

    qsort(A, N, sizeof(int),compare);

    scanf("%d", &M);
    for(int i=0; i<M;i++)
        scanf("%d", &B[i]);

    for(int i=0; i<M; i++) {
        x = B[i];
        y = 0;

        // 이진 탐색
        int left = 0, right = N - 1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(A[mid] == x) {
                y = 1;
                break;
            }
            else if(A[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
        }

        printf("%d\n", y);
    }
    return 0;
}

#include<stdio.h>
int main() {
    int N;

    scanf("%d",&N);
    int arr[N];

    for(int i = 0; i<N; i++) {

            scanf("%d" ,&arr[i]);
        }
    int min = 1000000, max = -1000000;
    for(int j = 0; j < N; j++){
        if(arr[j]<min)
            min = arr[j];
        if(arr[j] > max)
            max = arr[j];

    }
    printf("%d %d", min, max);

    return 0;
}

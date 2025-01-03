#include<stdio.h>

int main() {
    int N = 0;
    int val = 0;
    scanf("%d", &N);
    int arr[10]={0,};
    while(N>0) {
        arr[N%10]++;
        N/=10;
    }
    arr[6] = (arr[6]+arr[9]+1)/2;

    for(int i=0; i<9; i++) {
        if(val <arr[i]) val = arr[i];
    }
    printf("%d",val);

    return 0;


}
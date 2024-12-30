#include<stdio.h>

int main() {
    int arr[42]={0,};
    int x = 0;
    int sum = 0;

    for(int i =0; i<10;i++) {
        scanf("%d",&x);
        arr[x%42]=1;
    }

    for(int i = 0; i<42;i++) {
        sum+=arr[i];
    }

    printf("%d", sum);
    return 0;


}
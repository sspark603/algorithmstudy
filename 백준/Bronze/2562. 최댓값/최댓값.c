//
// Created by Sang on 2024. 10. 26..
//
#include<stdio.h>
int main() {
    int arr[9];
    int max;
    int index = 0;
    for(int i=0; i < 9; i++)
        scanf("%d", &arr[i]);

    max = arr[0];

    for(int j=0; j < 9; j++){
            if(max < arr[j]) {
                max = arr[j];
                index = j;
            }
    }

    printf("%d\n", max);
    printf("%d\n", index+1);

    return 0;

}
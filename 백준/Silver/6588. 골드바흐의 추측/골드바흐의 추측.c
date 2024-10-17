#include <stdio.h>
int arr[1000001] = {0,};
int main() {

    for(int i = 2; i< 1000001; i++) {

        if(arr[i] == 1)
            continue;
        for(int j =2; i*j < 1000001; j++) {
            arr[i*j] = 1;
        }
    }
    int num;
    while(1) {
        scanf("%d",&num);
        if(num == 0) 
            break;
        int i;
        for( i=3; i<=num/2; i+=2) {
            if(arr[num - i] != 1 && arr[i] !=1) {

                printf("%d = %d + %d\n", num, i, num-i);
                break;
            }

        }
        if(i >num/2) {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
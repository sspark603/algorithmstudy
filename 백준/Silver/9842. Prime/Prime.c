#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <2) return false;
    for (int i =2; i*i <= num; i++) {
        if (num%i == 0) return false;
    }
    return true;
}

int main() {
    int n,cnt = 0;
    int num = 2;

    scanf("%d",&n);

    while (cnt < n) {
        if (isPrime(num)) {
            cnt++;
            if (cnt == n) {
                printf("%d\n",num);
                break;
            }
        }
        num++;
    }
    return 0;
}


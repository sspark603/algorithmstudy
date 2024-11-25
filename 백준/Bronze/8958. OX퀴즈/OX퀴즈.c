//
// Created by Sang on 11/25/24.
//
#include<stdio.h>

int main() {
    int n = 0;
    char test[80];
    scanf("%d",&n);
    for(int i=0; i<n; i++) {

        int x = 0, y = 1, z = 0;
        scanf("%s",test);

        while(test[x] != '\0') {
            if(test[x] == 'O') {
                z += y++;
            }
            else {
                y = 1;
            }

            x++;
        }
        printf("%d\n",z);
    }
return 0;

}
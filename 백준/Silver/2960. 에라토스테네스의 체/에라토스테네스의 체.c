#include <stdio.h>

int main(){

int N,K;
scanf("%d %d", &N, &K);


int array[1001] ={0};
int i,j,k =0;

for(i = 2; i <= N; i++){
if (array[i] == 0){
for ( j=i; j <= N; j+=i){
    if (array[j] == 0){
        array[j] = 1;
        k++;
        if (k == K){
        printf("%d", j);
return 0;
}
}
}
}
}
}



#include<stdio.h>

int main(){

int N;

scanf("%d", &N);

for(int k = 0; k<31; k++){
if (N == (1 << k)){
printf("1\n");
return 0;
}
}

printf("0\n");
return 0;
}
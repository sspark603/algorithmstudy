#include <stdio.h>

int factorial(int N){
        if (N == 0)
        {
            return 1;
        }
        else
        {
            return N * factorial(N - 1);
        }
    }
    


int main()
{
    int N = 0;

    scanf("%d", &N);
    printf("%d\n", factorial(N));
    

    return 0;
}
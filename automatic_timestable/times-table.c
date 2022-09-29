#include <stdio.h>
#define N 12 // this is a macro.

int k;
int main()
{
    int i;
    printf("which times table you want?: ");
    scanf("%d", &k);

    for (i = 1; i <= N; i++)
    {
        int j;
        printf("%d x %d = %d \n", k, i, k*i);

    }
}



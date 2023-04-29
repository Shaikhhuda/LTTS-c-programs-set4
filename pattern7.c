// pattern 7

#include <stdio.h>

int main()
{
    int i, j, N=5;

    for(i=N; i>=1; i--)
    {
        for(j=N; j>=i; j--)
        {
            printf(" %d", j);
        }

        printf("\n");
    }

    return 0;
}
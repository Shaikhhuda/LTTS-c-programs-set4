// pattern 6

#include <stdio.h>

int main()
{
    int i, j, N=5;

    // printf("Enter N: ");
    // scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
    
        for(j=N; j>=i; j--)
        {
            printf(" %d", j);
        }

        printf("\n");
    }

    return 0;
}
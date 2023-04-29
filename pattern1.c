// print numbers from 1 to 25 in square pattern

#include <stdio.h>

int main()
{
    int rows=5, cols=5, i, j, k;

    k = 1;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++, k++)
        {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}
// Find the sum of triangular numbers

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = 0;
    printf("The sequence of partial sums is:\n");
    for(int i = 1; i <= n; i++) {
        int triangular_number = (i * (i + 1)) / 2;
        sum += triangular_number;
        printf("%d ", sum);
    }
    printf("\nThe sum of the first %d triangular numbers is %d\n", n, sum);
    return 0;
}


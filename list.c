// list of prime numbers between 11 to 25

#include <stdio.h>

int is_prime(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i, count = 0;
    for (i = 11; i <= 25; ++i) {
        if (is_prime(i)) {
            count++;
        }
    }
    printf("Number of prime numbers from 11 to 25: %d", count);
    return 0;
}

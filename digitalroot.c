// find the digital root of the given number

#include <stdio.h>

int digital_root(int num) {
    int sum = 0;
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digital root of %d is %d", num, digital_root(num));
    return 0;
}
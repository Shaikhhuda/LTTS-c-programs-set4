// Count the leap year in the given range of 1900 to 2500

#include <stdio.h>

int main() {
    int start = 1900, end = 2500;
    printf("Leap years from %d to %d are:\n", start, end);
    int count = 0;
    for(int year = start; year <= end; year++) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("\n %d ", year);
            count++;
        }
    }
    printf("\nTotal number of leap years in given range is: %d\n", count);
    return 0;
}


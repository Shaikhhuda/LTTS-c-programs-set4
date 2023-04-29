// pattern 10

#include <stdio.h>

int main() {
   int rows=4, num = 1, space, i, j;

   for(i=0; i<rows; i++) {
      for(space=1; space <= rows-i; space++)
         printf("  ");

      for(j=0; j <= i; j++) {
         printf("%4d", num);
         num++;
      }
      printf("\n");
   }
   return 0;
}

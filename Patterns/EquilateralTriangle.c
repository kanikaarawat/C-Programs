#include <stdio.h>

int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   for (i = 1; i <= rows; i++) {
      // Print spaces before each row
      for (j = 1; j <= rows - i; j++) {
         printf(" ");
      }
      
      // Print asterisks for each row
      for (j = 1; j <= 2 * i - 1; j++) {
         printf("*");
      }
      
      printf("\n");
   }
   
   return 0;
}

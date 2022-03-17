 #include <stdio.h>
 #include <stdlib.h>

 // Rows and Columns
 // row_columns.c

 #include <stdio.h>

 int main(void)
 {
         int i, j;
         for (i = 0; i < 5; i++) {
                 for (j = 0; j < 5; j++) {
                         printf("%d,%d  ", i, j);
                 }
                 printf("\n");
         }

         return 0;
 }

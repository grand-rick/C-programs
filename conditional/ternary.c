#include <stdio.h>
#include <stdlib.h>

 int main()
 {
         int minutes, slices;
         char s;

         printf("How many minutes left ? ");
         scanf("%d", &minutes);
         s = minutes > 1 ? 's' : ' ';
         printf("%d minute%c left\n", minutes, s);
          slices = 4;
         while (slices > 0) {
                 slices--;
                 printf("Gulp! Slices left %d\n", slices);
         }
         return 0;
 }

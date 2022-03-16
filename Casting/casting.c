 #include <stdio.h>
 #include <stdlib.h>

 // From minutes to hours
 // cast.c

 int main(void)
 {
         int minutes;
         float hours, min;

         printf("Minutes ? ");
         scanf("%d", &minutes);
         min = minutes;
         hours = min / 60;
         printf("= %.2lf hours\n", hours);

         return 0;
 }

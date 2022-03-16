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
         min = minutes; //promoting the integer value to a float without casting
         hours = min / 60; //Otherwise, hours = (float) minutes / 60;
         printf("= %.2lf hours\n", hours);

         return 0;
 }

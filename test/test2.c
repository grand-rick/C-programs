 #include <stdio.h>
 #include <stdlib.h>

// Relational Expressions
// relational.c

 int main(void)
 {
  int minutes;
  float hours;

  printf("Minutes ?");
  scanf("%d", &minutes);

  hours = (float) minutes/60;

  printf("%.2f", hours);

         return 0;
 }

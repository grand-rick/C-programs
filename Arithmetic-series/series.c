#include <stdio.h>
#include <stdlib.h>

// Arithmetic Series
// series.c

int main(void)
{
     int terminal, sum, i;
     sum = 0;
     i = 1;

     printf("Enter the terminal integer : ");
     scanf("%d", &terminal);

    while (i<=terminal) {
        printf("%d, ", i);
        sum += i;
        i++;
    }

     printf("\nThe sum of the series is %d\n", sum);

     return 0;
}

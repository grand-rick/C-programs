/*Program to find the factorial of a given number*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int I, FACT, N;

    FACT = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(I = 1;I<=N;I++) {
        FACT = FACT * I;
    }
    printf("%d\t", FACT);
 return 0;
}

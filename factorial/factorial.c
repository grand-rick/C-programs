/*Program to find the factorial of a given number*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int I, FACT, N;
    I = 1;
    FACT = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(;I<=N;I++) {
        FACT = FACT * I;
    }
    printf("%d\t", FACT);
 return 0;
}

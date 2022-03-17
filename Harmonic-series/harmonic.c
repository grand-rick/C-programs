#include <stdio.h>
#include <stdlib.h>

//Program to find the sum of a harmonic series

int main () {
    int h;
    float i, sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &h);

    for (i=1;i<=h;i++) {
        printf("1/%.0f ", i);
        sum = sum + (1 / i);
    }

    printf("\nThe sum is %.6f", sum);


    return 0;

}

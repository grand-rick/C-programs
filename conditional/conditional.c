#include <stdio.h>
#include <stdlib.h>
int a, b, x, great;

int main () {
    /*Max of three numbers using conditional operators*/
printf("Enter three numbers: ");
scanf("%d %d %d", &a , &b, &x);

//a>b?(a>x?printf("\t%d", a):printf("\t%d", x)):(b>x?printf("\t%d", b):printf("\t%d", x));
    great = (a>b&&a>x)?a:(b>a&&b>x)?b:x;
    printf("The greatest number is: %d", great);

    return 0;
}

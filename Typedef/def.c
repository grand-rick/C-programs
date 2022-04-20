/*Showing the function of typedef*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef int num;

num main() {
    num a, b, c;
    a=6;
    b=7;
    c=a+b;

    printf("%d\t%d\t%d", a, b, c);


    return 0;
}

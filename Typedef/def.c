/*Showing the function of typedef*/
/*C supports a feature known as “type definition” that allows users to define an identifier
that would represent an existing data type. The user-defined data type identifier can later be
used to declare variables. It takes the general form:
typedef type identifier ;*/
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

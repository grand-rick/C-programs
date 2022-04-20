/*A program to solve a few arithmetic problems*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int a=8, b=3, c=-5;
double x=8.8, y=3.5, z=-5.2;


int main () {
printf("I= %d\n", a/b);

printf("II= %d\n", 2*b+3*(a-c));

printf("III= %d\n", (a*c)%b);

printf("IV= %f\n", (x/y)+z);

//printf("V= %f\n", x%y);

printf("VI= %f", 2*x/(3*y));
return 0;
}

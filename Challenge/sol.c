/*A program to calculate the gross salary given the basic salary*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>




int main () {
double b, da, hra, gs;

printf("Enter basic salary: ");
scanf("%lf", &b);

if(b<1500) {
    da=(0.90)*b;
    hra=(0.10)*b;
} else {
    da=(0.98)*b;
    hra=500.0;
}
gs=b+da+hra;
printf("Gross salary=%.2f", gs);



return 0;
}

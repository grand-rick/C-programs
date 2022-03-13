/*Program to Calculate Area of A Circle*/
#include <stdio.h>
#include <stdlib.h>

int main () {
    const double PI = 3.142;
    double radius, area;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("\nThe area of the circle is %f", area);


    return 0;
}

//Program to swap two numbers without using a third variable

#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    int a, b;

    printf("\nEnter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping, a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping, a = %d, b = %d\n", a, b);;

    return 0;
}
*/
int swap(int x, int y);

int main () {
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Swapping: a = %d, b = %d", a, b);
    swap(a, b);

    return 0;
}

int swap (int x, int y) {
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nAfter swapping: a = %d, b = %d", x, y);

    return 0;
}









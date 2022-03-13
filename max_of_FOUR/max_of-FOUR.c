//Program to find the maximum number of four

#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main () {
    int num1, num2, num3, num4, ans;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    ans = max_of_four(num1, num2, num3, num4);
    printf("%d", ans);
    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    return max;
}

/*
int max_of_four(int a, int b, int c, int d);

int main () {
    int num1, num2, num3, num4, ans;
    printf("\nEnter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    ans = max_of_four(num1, num2, num3, num4);

    printf("\nMaximum of the four numbers is: %d", ans);

    main();

    return 0;
}



int max_of_four(int a, int b, int c, int d) {
    int max;
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }


    return max;
}
*/



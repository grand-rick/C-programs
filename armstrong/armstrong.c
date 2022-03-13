/*Program to check if a number is armstrong*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int no, num, digit, arm, sum;
    sum = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    num = no;

    while(num>0) {
        digit = num % 10;
        arm = digit * digit * digit;
        sum = sum + arm;
        num = num / 10;
    }

    if(sum==no) {
        printf("%d is an armstrong number", no);
    } else {
        printf("%d is NOT an armstrong number", no);
    }

    return 0;
}

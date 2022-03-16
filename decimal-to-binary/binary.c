#include <stdio.h>
#include <stdlib.h>

//Program to convert a decimal number into binary form

int main () {
    int no, num, mod, binary, digit, rev;
    rev = 0;
    binary = 0;

    printf("Enter an integer between 0 and 255: ");
    scanf("%d", &no);

    num = no;

    while(num>0) {
        digit = num % 2;
        binary = (binary*10) + digit;
        num /= 2;
    }

    while(binary>0) {
        digit = binary % 10;
        rev = (rev*10) + digit;
        binary /= 10;
    }
    binary = rev;

    printf("The binary equivalent of %d is %d",no, binary);


    return 0;
}

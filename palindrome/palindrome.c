#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Program to check if a number is a palindrome or not*/

int main() {
    int no, num, rev, digit;
    rev = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    num = no;

    do {
        digit = num%10;
        rev = (rev*10)+digit;
        num = num/10;
    } while(num>0);

    if(rev==no) {
        printf("%d is a palindrome number", no);
    } else if(num<0){
        printf("%d is NOT a palindrome number", no);
    } else {
        printf("%d is NOT a palindrome number", no);
    }
return 0;
}















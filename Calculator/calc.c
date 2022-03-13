#include <stdio.h>
#include <stdlib.h>

/*Basic Calculator using 4 operators*/
int main() {
    double num1, num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    switch(op) {
    case '+':
        printf("%f", num1 + num2);
        break;
    case '-':
        printf("%f", num1 - num2);
        break;
    case '/':
        printf("%f", num1 / num2);
        break;
    case '*':
        printf("%f", num1 * num2);
        break;
    default:
        printf("Invalid Operator");

    }
    return 0;
}

/*
    if(op == '+') {
        printf("%f", num1 + num2);
    } else if(op == '-') {
        printf("%f", num1 - num2);
    } else if(op == '/') {
        printf("%f", num1 / num2);
    } else if(op == '*') {
        printf("%f", num1 * num2);
    } else{
        printf("Invalid Operator");
    }
    */

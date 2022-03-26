#include <stdio.h>

int main () {
    char name[20];

    printf("Please enter your name:\n");
    scanf("%[^\n]", &name);

    printf("Your name is %s", name);


    return 0;
}

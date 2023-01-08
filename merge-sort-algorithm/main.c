#include <stdio.h>

int main(void) {
    int arrayLength = 5;
    int data[arrayLength];

    printf("Enter 5 digits ");
    for (int i = 0; i < arrayLength; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("The data you have entered is: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
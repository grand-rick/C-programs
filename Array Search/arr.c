/*Program to search for an element in an array*/
#include <stdio.h>
#include <stdlib.h>
/*
int main () {
    int i, arr[5]={11,23,73,43,50};
    int FindItem;

    for(i=0;i<5;i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nPlease enter the number you want to find: ");
    scanf("%d", &FindItem);

    for(i=0;i<5;i++) {
        if(arr[i]==FindItem) {
            printf("The number %d is at position %d", arr[i], i+1);
        }
    }
    return 0;
}
*/

int main () {
    int i, arr[10], len;
    int FindItem;

    printf("Please enter size of array, with maximum size of 10: ");
    scanf("%d", &len);

    printf("Please enter the values in your array: ");
    for(i=0;i<len;i++)
    scanf("%d", &arr[i]);

    printf("Please enter the number you want to find: ");
    scanf("%d", &FindItem);

    for(i=0;i<len;i++) {
        if(arr[i]==FindItem) {
            printf("The number %d is  at position %d", arr[i], i+1);
            return 0;
        }
    }

    printf("The number was not found in the array.");

    return 0;
}

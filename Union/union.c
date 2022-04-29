/*Explanation of Union, as a user-defined data-type*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

union Data {
int i;
float f;
char str[20];
};

int main() {
union Data data;

printf("Enter an integer: ");
scanf("%d", &data.i);
printf("Enter a float: ");
scanf("%lf", &data.f);
strcpy(data.str,"Programming");

printf("data.i=%d", data.i);
printf("\ndata.f=%f", data.f);
printf("\ndata.str=%s", data.str);


    return 0;
}

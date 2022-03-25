#include <stdio.h>
#include <stdlib.h>

int main () {
   // int luckyNumbers[10] = {2, 4, 1, 0, 5, 7, 9, 8, 6, 3};
   int i;

    //const int NCHAR = 17;
    //char name[17+1] = "My Name is Arnold";

    //printf("%s", name);

    //int i;
         //const char name[31] = "My name is Arnold";

         //for (i = 0; name[i] != '\0'; i++)
          //       printf("%c", name[i]);
         //putchar('\n');

    //printf("%d", luckyNumbers[1]);
   // for (i=0;i<10;i++) {
     //   printf("\n%d\t", luckyNumbers[i]);
    //}

    //char intro[18+1] = "My name is Patrick";

    char name[31];
    scanf("%[^\n]", name);

    /*for (i=0;i<18;i++) {
        printf("%c", intro[i]);
    }
    putchar('\n');*/

    printf("%s", name);


    return 0;
}

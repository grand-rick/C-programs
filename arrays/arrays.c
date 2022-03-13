#include <stdio.h>
#include <stdlib.h>

int main () {
    int luckyNumbers[10] = {2, 4, 1, 0, 5, 7, 9, 8, 6, 3};
    int i;

    //printf("%d", luckyNumbers[1]);
    for (i=0;i<10;i++) {
        printf("%d\t", luckyNumbers[i]);
    }


    return 0;
}

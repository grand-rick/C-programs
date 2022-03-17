#include <stdio.h>
#include <stdlib.h>

// Card Value
// cardValue.c

int main(void)
{
     char rank;
     int points;

     printf("Enter the card rank : ");
     scanf("%c", &rank);

     /*if (rank=='0') {
        points = 10;
     } else if (rank=='1') {
        points = 9;
     } else if (rank=='2') {
        points = 8;
     } else if (rank=='3') {
        points = 7;
     } else if (rank=='4') {
        points = 6;
     } else if (rank=='5'){
        points = 5;
     } else if (rank=='6') {
        points = 4;
     } else if (rank=='7') {
        points = 3;
     } else if (rank=='8') {
        points = 2;
     } else if (rank=='09') {
        points = 1;
     } else {
        points = 11;
     }*/
     switch (rank) {
        case '0' :
            points = 10;
            break;
        case '1' :
            points = 9;
            break;
        case '2' :
            points = 8;
            break;
        case '3' :
            points = 7;
            break;
        case '4' :
            points = 6;
            break;
        case '5' :
            points = 5;
            break;
        case '6' :
            points = 4;
            break;
        case '7' :
            points = 3;
            break;
        case '8' :
            points = 2;
            break;
        case '9' :
            points = 1;
            break;
        default :
            points = 11;
     }

     printf("The value of the card is %d points\n", points);
}

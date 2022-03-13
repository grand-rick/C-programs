#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*Outputting prime numbers between 1 and 10*/

int main() {
    int start, end, num, count, temp, sum, mod;
    sum = 0;
    printf("Enter start and end values\n");
    scanf("%d%d", &start, &end);

    if(start>end) {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are: \t", start, end);

    for(num=start;num<=end;num++) {

        for(count=2;count<num;count++) {
            mod = num%count;
            if(mod==0) {
                break;
            }
        }

        if(count==num) {
            printf("%d\t", num);
            sum += num;
        }
    }
    printf("\nThe sum of the above Prime numbers is: %d", sum);

return 0;
}
/* C Program to Convert Decimal to Binary */
/*
int main()
{
    int a[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);

    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }

    printf("\n Binary Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  {
        printf(" %d ", a[j]);
    }
    printf("\n");
    return 0;
}
*/

/*Converting Celsius to fahrenheit*/
/*
int main() {
    int cel, ans;
    double fah;
    do {
        printf("Enter number in Celsius to convert: ");
        scanf("%d", &cel);

        fah = (cel * 1.8) + 32;
        printf("\n%d in fahrenheit is %f", cel, fah);

        printf("\nWould you like to continue? ");
        scanf(" %d", &ans);
        if (ans==0) {
            break;
        }
    } while(ans == 1);


    return 0;
}*/

/*Converting  fahrenheit to Celsius*/
/*
int main() {
    int ans;
    double cel, fah;
    do {
        printf("Enter Fahrenheit to convert: ");
        scanf("%lf", &fah);

        cel = (fah - 32)/1.8;
        printf("%f in Celsius is %f", fah, cel);
        printf("\nWould you like to continue? ");
        scanf("%d", &ans);
        if(ans==0) {
            break;
        }
    } while(ans==1);

    return 0;
}
*/

/*PROGRAM TO CHECK IF A NUMBER IS PRIME
int main () {
    int num, i, mod;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for(i=2;i<num;i++) {
        mod = num % i;
        if (mod == 0) {
            break;
        }
    }

    if (num==i) {
        printf("%d is prime", num);
    } else {
        printf("%d is NOT prime", num);
    }

        main();
    return 0;
}
*/




















#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int main() {
    char grade = 'i';

    switch(grade) {
    case 'A':
        printf("Excellent! You have passed");
        break;
    case 'B':
        printf("Very Good");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Bad");
        break;
    case 'E':
        printf("You have failed");
        break;
    default:
        printf("Invalid Input");

    }

    return 0;
}
*/

/*struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Patrick");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name, "Jim");
    strcpy(student2.major, "Art");

    printf("%s", student2.name);
    return 0;
}
*/

/*
struct Phone {
    char name[20];
    char company[20];
    int model;
    double pixels;
};

int main() {
    struct Phone phone1;
    phone1.model = 3000;
    strcpy(phone1.name, "RealMe");
    strcpy(phone1.company, "Oppo");

    printf("%s", phone1.company);


    return 0;
}*/

/*
struct Book {
    char name[30];
    char author[20];
    int pages;
    double price;
    double edition;
};

int main() {
    struct Book book1;

    strcpy(book1.name, "Rich Dad Poor Dad");
    strcpy(book1.author, "Robert Kiyosaki");
    book1.pages = 256;
    book1.price = 34.99;
    book1.edition = 4.2;

    struct Book book2;

    strcpy(book2.name, "The 48 Laws Of Power");
    strcpy(book2.author, "Robert Greene");
    book2.pages = 490;
    book2.price = 45.99;
    book2.edition = 3.1;

    printf("%f", book2.edition);
    return 0;
} */

/*
int main() {

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;


    while(guess != secretNumber && outOfGuesses == 0) {
            if(guessCount<guessLimit) {
                printf("Enter a number: ");
                scanf("%d", &guess);
                guessCount++;
            } else {
                outOfGuesses = 1;
            }
    }

    if(guess == secretNumber) {
        printf("You Win!");
    } else {
        printf("Out of guesses");
    }


    return 0;
}
*/
/*
int main() {
    char firstName[30];
    char secondName[30];

    printf("Enter your name: ");
    scanf("%s%s", &firstName, &secondName);
    printf("%s %s", firstName, secondName);

    return 0;
}
*/
/*
int main() {

    int nums[3][2] ={
            {1, 2},
            {3, 4},
            {5, 6}
        };


    int i, j;
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++) {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
int main() {

    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;


    printf("age's address: %p", pAge);

    return 0;
}
*/

/*
int main() {

    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim, Salesman\nRick, Commentator\nKelly, Customer Service");

    fclose(fpointer);
    return 0;
}
*/

/*
int main() {

    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;
}
*/
/*
int main() {
    int start, end, num, count, prime, temp, inum;
    printf("Enter start and end value\n");
    scanf("%d%d", &start, &end);

    if(start>end) {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are\n", start, end);

    for(num=start;num<=end;num++) {
        prime = 1;
        inum = sqrt(num);
        for(count=2;count<=inum;count++) {
            if(num%count==0) {
                prime = 0;
                break;
            }
        }
        if(prime) {
            printf("%d\t", num);
        }
    }

return 0;
}
*/








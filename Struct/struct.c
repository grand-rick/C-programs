#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
/*
    struct student{
    char name[30];
    char country[20+1];
    int age;
    };
    struct student stud;
int main() {

    printf("Enter student name: ");
    scanf("%s", &stud.name);
    printf("Enter student age: ");
    scanf("%d", &stud.age);
    printf("Enter country: ");
    scanf("%s", &stud.country);


    printf("Name=%s", stud.name);
    printf("\nAge=%d", stud.age);
    printf("\nCountry=%s", stud.country);

    printf("\nSize=%d", sizeof(struct student));
    return 0;
}
*/

int main () {
    struct Book {
    char title[10];
    char author[20];
    int pages;
    };

    struct Book book1;
    printf("Enter title: ");
    gets(book1.title);
    printf("Enter author: ");
    gets(book1.author);
    printf("Pages: ");
    gets(book1.pages);

    printf("Title=%s", book1.title);
    printf("\nAuthor=%s", book1.author);
    printf("\nPages=%d", book1.pages);
    return 0;
}




















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

#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void) {
    char s[30];
    int i, n;

    printf("Before: ");
    scanf("%s", &s);

    printf("After: ");

    for(i=0,n=strlen(s);i<n;i++) {
        printf("%c", tolower(s[i]));
    }
    printf("\n");
}

/*
int main(void) {
    char name[20];
    int i, n;

    printf("Enter name: ");
    scanf("%s", &name);

    printf("After: ");

    for(i=0, n=strlen(name);i<n;i++) {
        if(name[i]>='a' && name[i]<='z') {
            name[i] -= 32;
            printf("%c", name[i]);
        } else {
            printf("%c", name[i]);
        }
    }


}
*/

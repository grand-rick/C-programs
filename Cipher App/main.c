#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>

void encipher(int key, string msg);
void decipher(int key, string msg);

int main(void) {
    printf("Hello there, type 'e' to encrypt or 'd' to decrypt.\n");

    char process;
    do {
        process = get_char("What would you like to do? ");

        if(process == 'e') {
                const string e_code = get_string("Enter message to encrypt: ");
                const int e_key = get_int("Enter private key: ");
                encipher(e_key, e_code);
                break;
        } else if(process == 'd') {
                const string d_code = get_string("Enter message to decrypt: ");
                const int d_key = get_int("Enter private key: ");
                decipher(d_key, d_code);
                break;
        } else {
                printf("Please enter e for encrypting and d for encrypting, thank you.\n");

        }
    } while(process != 'e' || process != 'd');

    return 0;
}


void encipher(int key, string msg) {
    if(key <=5) {
        for(int i = 0, n = strlen(msg);i < n;i++) {
        //Converting the string to uppercase
        msg[i] = toupper(msg[i]);
        //Adding the key to the elements in the string
            msg[i] += key;
    }
        //Printing the key and the transformed message onto the console
        printf("Encrypted message : %s\n",msg);
    } else {
        //If the key is greater than 5, the process wont execute and will stop there
        printf("ERROR! Cannot execute program.\n");
    }

}

void decipher(int key, string msg) {
    if(key <=5) {
        for(int i = 0, n = strlen(msg);i < n;i++) {
        //Converting the screen to uppercase
        msg[i] = toupper(msg[i]);
        //Subtracting the key to the elements in the string
            msg[i] -= key;
    }
        //Printing the key and the transformed message onto the console
        printf("Decrypted message : %s\n", msg);
    } else {
        //If the key is greater than 5, the process wont execute and will stop there.
        printf("ERROR! Cannot execute program.\n");
    }
}

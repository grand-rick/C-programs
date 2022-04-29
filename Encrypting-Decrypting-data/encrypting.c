//Program to encrypt and decode data
//encrypting.c
//Additional comment

int encryption (int x);
int decryption (int y);
int convert (int z);

int digit;

int main () {
    //Limit of input is 9 numbers
    long long int encrypt, decrypt;
    char ans;

    printf("How would you like to proceed? \n1-Encrypt 0-Decrypt: \n");
    scanf("%c", &ans);

    switch (ans) {
    case '1':
        printf("Awesome! Let's encrypt\n");
        printf("Enter the number you want to encrypt: ");
        scanf("%9d", &encrypt);
        encryption(encrypt);
        break;
    case '0':
        printf("Great! so you want to decrypt!!\n");
        printf("Enter the number you want to decrypt: ");
        scanf("%9d", &decrypt);
        decryption(decrypt);
        break;
    default:
        printf("Please limit your input to 1 for yes and 0 for no.");
        break;
    }
    return 0;
}

//Function to encrypt data
int encryption (int x) {
    long int num1, num2, rev1, rev2;
    rev1 = 0;
    rev2 = 0;
    printf("Before encryption: %d", x);

    num1 = x;
    while (x>0) {
        digit = x % 10;
        encr(digit);
        rev1 = (rev1 * 10) + digit;
        x /= 10;
    }
    //Second reversal
    num2 = rev1;
    while (num2>0) {
        digit = num2 % 10;
        rev2 = (rev2*10) + digit;
        num2/=10;
    }

    printf("\nAfter encryption: %d", rev2);
    return  0;
}

//Function to decrypt data
int decryption (int y) {
    printf("Before decryption: %d", y);
    long long int num1, num2, rev1, rev2;
    rev1 = 0;
    rev2 = 0;

    num1 = y;
    while (num1>0) {
        digit = num1 % 10;
        decr(digit);
        rev1 = (rev1*10) + digit;
        num1 /= 10;
    }

    //Second reversal
    num2 = rev1;
    while (num2>0) {
        digit = num2 % 10;
        rev2 = (rev2*10) + digit;
        num2 /= 10;
    }
    printf("\nAfter decryption: %d", rev2);
    return 0;
}

//Function that matches original numbers to encrypted numbers
int encr (int z) {
    int conv;
    conv = z;

    switch (conv) {
    case 0:
        conv = 3;
        break;
    case 1:
        conv = 4;
        break;
    case 2:
        conv = 5;
        break;
    case 3:
        conv = 6;
        break;
    case 4:
        conv = 7;
        break;
    case 5:
        conv = 8;
        break;
    case 6:
        conv = 9;
        break;
    case 7:
        conv = 0;
        break;
    case 8:
        conv = 1;
        break;
    case 9:
        conv = 2;
        break;
    }
    digit = conv;
    return digit;
}

//Function that matches encrypted numbers to original numbers
int decr (int z) {
    int conv;
    conv = z;

    switch (conv) {
    case 0:
        conv = 7;
        break;
    case 1:
        conv = 8;
        break;
    case 2:
        conv = 9;
        break;
    case 3:
        conv = 0;
        break;
    case 4:
        conv = 1;
        break;
    case 5:
        conv = 2;
        break;
    case 6:
        conv = 3;
        break;
    case 7:
        conv = 4;
        break;
    case 8:
        conv = 5;
        break;
    case 9:
        conv = 6;
        break;
    }
    digit = conv;
    return digit;
}

















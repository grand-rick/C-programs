int main () {
    int num, half, result, ans;
    do {
    printf("Enter a number: ");
    scanf("%d", &num);

    half = num / 2;
    result = num - (2 * half);

    if(result != 0) {
        printf("%d is ODD", num);
    } else {
        printf("%d is EVEN", num);
    }
    printf("\nWould you like to continue?: ");
    scanf("%d", &ans);
  } while(ans ==1);


    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, vowels = 0;

    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n') {
        length++;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
        i++;
    }

    printf("Length of the string: %d\n", length);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}

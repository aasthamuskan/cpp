#include<iostream>
#include<string>
using namespace std;

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

    cout<<"Length of the string: "<<length<<endl;
    cout<<"Number of vowels: "<<vowels;

    return 0;
}

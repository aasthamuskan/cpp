#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
 int *ptr = arr;

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
#include <stdio.h>

int main() {
    // Declare a character variable
    char c = 'A';

    // Declare a pointer to a character
    char *ptr;

    // Assign the address of the character variable to the pointer
    ptr = &c;

    // Print the value of the character variable using the pointer
    printf("Value of c: %c\n", *ptr);

    // Print the address of the character variable
    printf("Address of c: %p\n", (void *)&c);

    // Print the address stored in the pointer
    printf("Address stored in ptr: %p\n", (void *)ptr);

    return 0;
}
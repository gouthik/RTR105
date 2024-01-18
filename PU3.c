#include <stdio.h>

int main() {
    char letters[3];

    // Get input from the user
    printf("Enter three letters: ");
    scanf("%c %c %c", &letters[0], &letters[1], &letters[2]);

    // Ask for the order of sequence
    printf("Enter the order of sequence (A for ascending order, D for descending order): ");
    char order;
    scanf(" %c", &order);

    // Sort the letters based on user input
    if (order == 'A' || order == 'a') {
        if (letters[0] > letters[1]) {
            char temp = letters[0];
            letters[0] = letters[1];
            letters[1] = temp;
        }
        if (letters[1] > letters[2]) {
            char temp = letters[1];
            letters[1] = letters[2];
            letters[2] = temp;
        }
        if (letters[0] > letters[1]) {
            char temp = letters[0];
            letters[0] = letters[1];
            letters[1] = temp;
        }
    } else if (order == 'D' || order == 'd') {
        if (letters[0] < letters[1]) {
            char temp = letters[0];
            letters[0] = letters[1];
            letters[1] = temp;
        }
        if (letters[1] < letters[2]) {
            char temp = letters[1];
            letters[1] = letters[2];
            letters[2] = temp;
        }
        if (letters[0] < letters[1]) {
            char temp = letters[0];
            letters[0] = letters[1];
            letters[1] = temp;
        }
    } else {
        printf("Invalid order input. Please enter 'A' or 'D'.\n");
        return 1;  // Exit with an error code
    }

    // Output the sorted sequence
    printf("Sorted sequence: %c %c %c\n", letters[0], letters[1], letters[2]);

    return 0;
}

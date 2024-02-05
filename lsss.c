#include <stdio.h>

int main() {
    char letter1, letter2, letter3;
    char temp;

    // Prompt user for input
    printf("Enter three letters: ");
    scanf(" %c %c %c", &letter1, &letter2, &letter3);

    // Ask for sorting order
    printf("Do you want to sort in alphabetical order (A) or reverse order (R)? ");
    char order;
    scanf(" %c", &order);

    // Sort the letters
    if (order == 'A' || order == 'a') {
        if (letter1 > letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
        if (letter2 > letter3) {
            temp = letter2;
            letter2 = letter3;
            letter3 = temp;
        }
        if (letter1 > letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
    } else if (order == 'R' || order == 'r') {
        if (letter1 < letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
        if (letter2 < letter3) {
            temp = letter2;
            letter2 = letter3;
            letter3 = temp;
        }
        if (letter1 < letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
    } else {
        printf("Invalid input for sorting order. Please enter 'A' or 'R'.\n");
        return 1;
    }

    // Display sorted sequence
    printf("Sorted sequence: %c %c %c\n", letter1, letter2, letter3);

    return 0;
}

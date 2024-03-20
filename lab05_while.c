#include <stdio.h>

void calculateCharFactorial(char num);
void calculateIntFactorial(int num);
void calculateLongFactorial(long long num);

int main() {
    long long inputNum;
    char choice;

    printf("Please Enter Decimal Number: ");
    scanf("%lld", &inputNum);
    printf("Please Enter first letter of Data type Char(c) Int(i) Long(l)\n: ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'c':
            calculateCharFactorial((char)inputNum); // Cast inputNum to char
            break;
        case 'i':
            calculateIntFactorial((int)inputNum); // Cast inputNum to int
            break;
        case 'l':
            calculateLongFactorial(inputNum);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

void calculateCharFactorial(char num) {
    char charNum = 1;
    char reference = 1;
    int counter = 1;

    while (counter < num) {
        charNum *= (counter + 1);
        reference *= counter;

        if (charNum / (counter + 1) != reference) {
            printf("Selected Data type is too small to store number %d\n", num); // Changed %lld to %d
            break;
        }

        counter++;
    }

    if (charNum == reference * num) {
        printf("Factorial Of Number %d! = %d\n", num, charNum); // Changed %lld to %d
    }
}

void calculateIntFactorial(int num) { // Changed parameter type to int
    int intNum = 1;
    int reference = 1;
    int counter = 1;

    while (counter < num) {
        intNum *= (counter + 1);
        reference *= counter;

        if (intNum / (counter + 1) != reference) {
            printf("Selected data type is too small to store factorial of number %d\n", num); // Changed %lld to %d
            break;
        }

        counter++;
    }

    if (intNum == reference * num) {
        printf("Factorial Of Number %d! = %d\n", num, intNum); // Changed %lld to %d
    }
}

void calculateLongFactorial(long long num) {
    long long longNum = 1;
    long long counter = 1;

    while (counter <= num) {
        longNum *= counter;

        if (longNum < counter) {
            printf("Selected data type is too small to store factorial of number %lld\n", num);
            return;
        }

        counter++;
    }

    printf("Factorial of Number %lld! = %lld\n", num, longNum);
}

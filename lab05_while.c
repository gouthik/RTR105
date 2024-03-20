#include <stdio.h>

void calculateCharFactorial(char);
void calculateIntFactorial(int);
void calculateLongFactorial(long long);

int main() {
    long long inputNum;
    char choice;

    printf("Please Enter Decimal Number: ");
    scanf("%lld", &inputNum);

    printf("Please Enter first letter of Data type Char(c) Int(i) Long(l):\n");
    scanf(" %c", &choice);

    switch (choice) {
        case 'c':
            calculateCharFactorial((char)inputNum);
            break;
        case 'i':
            calculateIntFactorial((int)inputNum);
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
            printf("Selected Data type is too small to store number %d\n", num);
            return;
        }

        counter++;
    }

    printf("Factorial Of Number %d! = %hhd\n", num, charNum);
}

void calculateIntFactorial(int num) {
    int intNum = 1;
    int reference = 1;
    int counter = 1;

    while (counter < num) {
        intNum *= (counter + 1);
        reference *= counter;

        if (intNum / (counter + 1) != reference) {
            printf("Selected data type is too small to store factorial of number %d\n", num);
            return;
        }

        counter++;
    }

    printf("Factorial Of Number %d! = %d\n", num, intNum);
}

void calculateLongFactorial(long long num) {
    long long longNum = 1;
    long long counter = 1;

    while (counter <= num) {
        longNum *= counter;

        if (longNum < 0)
        {
            printf("Selected data type is too small to store factorial of number %lld\n", num);
            return;
        }

        counter++;
    }

    printf("Factorial Of Number %lld! = %lld\n", num, longNum);
}

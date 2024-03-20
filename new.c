#include <stdio.h>



void calculateCharFactorial(long long num);

void calculateIntFactorial(long long num);

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

            calculateCharFactorial(inputNum);

            break;

        case 'i':

            calculateIntFactorial(inputNum);

            break;

        case 'l':

            calculateLongFactorial(inputNum);

            break;

        default:

            printf("Invalid choice\n");

    }



    return 0;

}



void calculateCharFactorial(long long num) {

    char charNum = 1;

    char reference = 1;



    for (int counter = 1; counter < num; counter++) {

        charNum *= (counter + 1);

        reference *= counter;



        if (charNum / (counter + 1) != reference) {

            printf("Selected Data type is too small to store number %lld\n", num);

            break;

        }

    }



    if (charNum == reference * num) {

        printf("Factorial Of Number %lld! = %d\n", num, charNum);

    }

}



void calculateIntFactorial(long long num) {

    int intNum = 1;

    int reference = 1;



    for (int counter = 1; counter < num; counter++) {

        intNum *= (counter + 1);

        reference *= counter;



        if (intNum / (counter + 1) != reference) {

            printf("Selected data type is too small to store factorial of number %lld\n", num);

            break;

        }

    }



    if (intNum == reference * num) {

        printf("Factorial Of Number %lld! = %d\n", num, intNum);

    }

}



void calculateLongFactorial(long long num) {
    long long longNum = 1;
    int intNum = 1;
     int reference = 1;
    for (long long counter = 1; counter <= num; counter++) {
        longNum *= counter;

    {  if (intNum == reference * num) {

        printf("Factorial Of Number %lld! = %d\n", num, intNum);
            return;
        }
    }

    printf("Factorial of Number %lld! = %lld\n", num, longNum);
}
}

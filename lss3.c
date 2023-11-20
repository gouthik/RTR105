#include <stdio.h>

void calculateFactorial(char dataType, long long num) {
    long long res = 1;

    for (long long i = 1; i <= num; i++) {
        res *= i;

        if (res / i != (i - 1)) {
            printf("Error: Cannot calculate factorial.\n");
            return;
        }
    }

    printf("Factorial: %lld\n", res);
}

int main() {
    long long num;
    char dataType;

    printf("Enter a decimal number: ");
    scanf("%lld", &num);

    printf("Choose data type - (c)har, (i)nt, (l)ong long: ");
    scanf(" %c", &dataType);

    if (dataType == 'c' || dataType == 'i' || dataType == 'l') {
        calculateFactorial(dataType, num);
    } else {
        printf("Invalid selection.\n");
    }

    return 0;
}

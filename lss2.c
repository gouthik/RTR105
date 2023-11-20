#include <stdio.h>

void cal(char dataType, long long num) {
    long long result = 1;

    while (num > 0) {
        if ((dataType == 'c' && result > 127) || (dataType == 'i' && result > 2147483647) || (dataType == 'l' && result > 9223372036854775807)) {
            printf("Error: Overflow occurred. Cannot calculate factorial.\n");
            return;
        }

        result *= num;
        num--;

        if (result < 0) {
            printf("Error: Overflow occurred. Cannot calculate factorial.\n");
            return;
        }
    }

    printf("Factorial: %lld\n", result);
}

int main() {
    long long num;
    char dataType;

    printf("Enter a decimal number: ");
    scanf("%lld", &num);

    printf("Choose data type - (c)har, (i)nt, (l)ong long: ");
    scanf(" %c", &dataType);

    switch (dataType) {
        case 'c':
            cal('c', num);
            break;
        case 'i':
            cal('i', num);
            break;
        case 'l':
            cal('l', num);
            break;
        default:
            printf(" data type not valid.\n");
    }

    return 0;
}

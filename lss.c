#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);
    printf("Enter sorting order (1 ascending, 2 descending): ");
    int s;
    scanf("%d", &s);
    if (s == 1) {
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    } else if (s == 2) {
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 < num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    } else {
        printf("Invalid sorting order entered. Please enter 1 for ascending or 2 for descending.\n");
        return 3; 
    }

    printf("Sorted sequence: %d, %d, %d\n", num1, num2, num3);

    return 0; 
}

#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6  // Define a small value for precision

double func(double x) {
    return x*x - 4;  // Example equation: f(x) = x^2 - 4
}

// Bisection method to find the root of the equation f(x) = c
double bisection(double a, double b, double c, double precision, int *iterations) {
    double x;

    if (func(a) * func(b) >= 0) {
        printf("Invalid numbers of 'a' and 'b'. They should have different signs.\n");
        return 0;
    }

    do {
        x = (a + b) / 2.0;
        
        // Check if the root is found
        if (fabs(func(x) - c) < precision) {
            break;
        }

        // Update the range [a, b] based on the signs of f(a) and f(x)
        if (func(x) * func(a) < 0) {
            b = x;
        } else {
            a = x;
        }

        (*iterations)++;

    } while (fabs(b - a) > precision);

    return x;
}

int main() {
    double a, b, c, precision, result;
    int iterations = 0;

    // Obtain user input
    printf("Enter the value of 'a': ");
    scanf("%lf", &a);

    printf("Enter the value of 'b': ");
    scanf("%lf", &b);

    printf("Enter the value of 'c': ");
    scanf("%lf", &c);

    printf("Enter value for precision: ");
    scanf("%lf", &precision);

    result = bisection(a, b, c, precision, &iterations);

    // Display the results
    printf("\nRoot of the equation f(x) = c is: %lf\n", result);
    printf("f(%lf) = %lf\n", result, func(result));
    printf("Number of iterations: %d\n", iterations);

    return 0;
}

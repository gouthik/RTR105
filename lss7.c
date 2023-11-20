#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int result = multiply(3, 4);

    printf("Product: %d\n", result);

    return 0;
}

// Name: Bapilar, Miguel C.
// Year & Section: D.I.T. 1-2
// 2: Using Operators

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 8, b = 4;
    int sum, difference, product;
    float quotient;

    // Arithmetic Operators
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    printf("--- Arithmetic Operators ---\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    // Logical Operators
    bool andResult = (a > b) && (b < a);
    bool orResult = (a > b) || (b > a);
    bool notResult = !(a == b);

    printf("\n--- Logical Operators ---\n");
    printf("(a > b) && (b < a): %d\n", andResult);
    printf("(a > b) || (b > a): %d\n", orResult);
    printf("!(a == b): %d\n", notResult);

    // Assignment Operators
    printf("\n--- Assignment Operators ---\n");
    int x = 10;
    printf("Initial value of x: %d\n", x);
    x += 5;
    printf("After x += 5: %d\n", x);
    x -= 3;
    printf("After x -= 3: %d\n", x);
    x *= 2;
    printf("After x *= 2: %d\n", x);
    x /= 4;
    printf("After x /= 4: %d\n", x);

    return 0;
}

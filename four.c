// Name: Bapilar, Miguel C.
// Year & Section: D.I.T. 1-2
// 224: Using if-else Statements

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

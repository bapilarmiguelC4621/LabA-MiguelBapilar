// Name: Bapilar, Miguel C.
// Year & Section: D.I.T. 1-2
// 3: Using Loops



int main(void) {

    // While loop: Print numbers from 1 to 10
    int i = 1;
    printf("--- While Loop (1 to 10) ---\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    // For loop: Print even numbers from 2 to 20
    printf("\n\n--- For Loop (Even numbers 2 to 20) ---\n");
    for (int j = 2; j <= 20; j += 2) {
        printf("%d ", j);
    }

    // Do-While loop: Print numbers from 1 to 5
    printf("\n\n--- Do-While Loop (1 to 5) ---\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);

    printf("\n");
    return 0;
}

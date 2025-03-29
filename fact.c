#include <stdio.h>

void factorial() {
    int num;
    long long fact = 1;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Factorial is not defined for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }

        // Output the factorial result
        printf("Factorial of %d is %lld\n", num, fact);
    }

   // return 0;
}


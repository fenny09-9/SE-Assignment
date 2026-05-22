#include<stdio.h>

// Function declaration
int factorial(int);

main() {

    int num, ans;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    ans = factorial(num);

    printf("\n Factorial = %d", ans);

    
}

// Function definition
int factorial(int n) {

    int i, fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

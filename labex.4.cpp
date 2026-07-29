#include<stdio.h>

 main() {

    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic Operations
    printf("\n Addition = %d", a + b);
    printf("\n Subtraction = %d", a - b);
    printf("\n Multiplication = %d", a * b);
    printf("\n Division = %d", a / b);

    // Relational Operations
    printf("\n A > B = %d", a > b);
    printf("\n A < B = %d", a < b);
    printf("\n A == B = %d", a == b);

// Logical Operations
      printf("\n Both numbers are positive = %d", (a > 0 && b > 0));
    printf("\n At least one number is positive = %d", (a > 0 || b > 0));

}

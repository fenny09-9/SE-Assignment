#include<stdio.h>
 main() {

    int i;

    // While Loop
    printf("\n Using while loop:");
    i = 1;
    while(i <= 10) {
        printf("%d ", i);
        i++;
    }

    // For Loop
    printf("\n Using for loop:");
    for(i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // Do-While Loop
    printf("\n Using do-while loop:");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);

    
}

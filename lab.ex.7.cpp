#include<stdio.h>

main() {

    int i;

    // Using break
    printf("\n Using break:");
    for(i = 1; i <= 10; i++) {

        if(i == 5) {
            break;
        }

        printf("\n %d ", i);
    }

    // Using continue
    printf("\n Using continue:");
    for(i = 1; i <= 10; i++) {

        if(i == 3) {
            continue;
        }

        printf("\n %d ", i);
    }

    
}

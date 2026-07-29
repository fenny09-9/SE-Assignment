#include <stdio.h>
main(){

char task[5][50];
int count = 0;

    int i;

    printf("\n Enter 5 Tasks:");

    for(i=0; i<5;i++){
        printf("Task %d: ",i+1);
        scanf(" %s" ,task[i]);
        count++;
    }

    printf("\nTask List:");
  for(i=0; i<count;i++){
        printf("\n %d %s", i + 1, task[i]);
    }

}

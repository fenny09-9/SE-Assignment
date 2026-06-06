#include <stdio.h>

char task[5][50];
int status[5]={0};

void markTaskDone(int n){
    status[n]=1;
}

main(){

    int i,n;

    printf("Enter 5 Tasks:\n");

    for(i=0;i<5;i++){
        printf("Task %d: ",i+1);
        scanf("%s",task[i]);
    }

    printf("Enter Task Number to Mark Done: ");
    scanf("%d",&n);

    markTaskDone(n-1);

    printf("\nTask List:\n");

    for(i=0;i<5;i++){

        printf("%d. %s",i+1,task[i]);

        if(status[i]==1){
            printf(" - DONE");
        }

        printf("\n");
    }
}

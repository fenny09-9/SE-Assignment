#include<stdio.h>

main(){

	int number=50,guess,attempt=1;

	printf("\n Guess Number Between 1 to 100.You get only 5 attemps.");

	while(attempt<=5){

		printf("\n Enter Number : ");
		scanf("%d",&guess);


		if(guess > number){
			printf("\n  High");
		}
		else if(guess < number){
			printf("\n  Low");
		}
		else{
			printf("\n Correct Guess");
			break;
		}

		attempt++;
	}

	if(guess != number){
		printf("\n Game Over");
	}
}

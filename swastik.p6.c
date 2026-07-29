#include<stdio.h>
main(){
	int row,col;
	
	for(row=1; row<=9;row++){
		for(col=1;col<=9;col++){
			if(
			row==5 || col==5||
			(row==1 && col>=5)||
			(col==1 && row<=5)||
			(row==9 && col<=5)||
			(col==9 && row>=5)
			)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}

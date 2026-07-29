#include<stdio.h>
main(){
	int row,col,space,rowend,colend;
	printf("\n Enter rowend and colend: ");
	scanf("%d %d",&rowend,&colend);
	if(rowend== colend){
			for(row=1;row<=rowend;row++){
		for(space=colend-1;space>=row;space--){
			printf("  ");
		
	}
	for(col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
}
}

//else -if ladder
/*
if(condition1){
//block
}
else if(condition2){
//block
}
else{}
*/
#include<stdio.h>
main(){
	int x,y;
	printf("\n Enter x axis value and a y axis value:");
	scanf("%d %d",&x,&y);
	
	if( x>0 && y>0){
		printf("\n First");
	}
	else if( x<0 && y>0){
		printf("\n Second");
	}
		else if( x<0 && y<0){
		printf("\n Third");
	}
		else if( x>0 && y<0){
		printf("\n Fourth");
	}
	else{
		printf("\n Center");
	}
}


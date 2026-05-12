/*
switch(choice){
case 1:
//block
break;
    case 2:
    //block
    break;
    default:
     msg
     break
}
*/
#include<stdio.h>
main(){
	int x,y,choice;
	printf("\n press 1 for Addition");
	printf("\n press 2 for Subtraction");
	printf("\n press 3 for Multiplication");
	printf("\n press 4 for Division");
	
	printf("\n Enter x and y:");
	scanf("%d %d",&x,&y);
	
	printf("\n Enter your choice");
	scanf("%d",&choice);
	
	
	
	switch(choice){
		case 1:
			printf("\n addition=%d",x+y);
			break;
  	    case 2:
			printf("\n subtraction=%d",x-y);
			break;
		case 3:
			printf("\n multiplication=%d",x*y);
			break;
		case 4:
			printf("\n division=%d",(float)x/y);
			break;
			default:
				printf("\n Wrong choice.");
				break;
	}
}

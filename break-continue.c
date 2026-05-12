#include<stdio.h>
main(){
	int i,choice;
	for(i=1;i<=10;i++){
		if(i==5){
			//break
			continue;
			}
			printf("\n i=%d",i);
	}
	for(;;){
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		if(choice==1);{
		break;
		}
	}
}

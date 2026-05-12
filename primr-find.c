#include<stdio.h>
main(){
	int num,i,flag=0;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	if(num==1==0){
		printf("\n Invalid input");
		
	}
	else{
	
	

	for(i=2;i<=num;i++){
		if(num%i==0){
			flag=1;
			
		}
	}
	(flag==0)?printf("\n Prime"):printf("\n Not prime");
}
}

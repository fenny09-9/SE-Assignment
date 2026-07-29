#include<stdio.h>
main(){
	int Maths,Phy,Chem,total,subtotal;
	printf("Enter maths phy and chem marks:");
	scanf("%d %d %d",&Maths,&Phy,&Chem);
	
	if(Maths>=65 && Phy>=55 && Chem>=50){
		total = Maths+Phy+Chem;
		subtotal = Maths+Phy;
		if(total >= 190 || subtotal>= 145){
		printf("\n Eligible for Admission.");	
		}
		else{
			printf("\n Not inner Eligible.");
		}
		
	} 
	else{
				printf("\n Not eligible.");
	}
}

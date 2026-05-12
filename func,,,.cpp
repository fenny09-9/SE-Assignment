#include<stdio.h>

void areaOfSquare(int s){
	int ans=s*s;
	printf("\n Area of square is %d",ans);
}
void areaOfRectangle(int l,int b){
	int area=l*b;
	printf("\n Area of square is %d",area);
}

float SimpleIntrest(float p,float r,float t){
	float si;
	si=(p*r*t)/100;
	return si;
	}
	
	main(){
		areaOfSquare(12);
		areaOfRectangle(12,9);
		
		float y=SimpleIntrest(60000,8,2);
		printf("\n SimpleIntrest is %f",y);
	
		
		
		
			}
			

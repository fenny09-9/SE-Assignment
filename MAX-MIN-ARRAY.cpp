#include<stdio.h>

main(){

	int a[10],i,j,temp,max,min;

	printf("\n Enter 10 numbers");

	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	max = a[0];
	min = a[0];

	// Find maximum and minimum
	for(i=1;i<10;i++){

		if(a[i]>max){
			max = a[i];
		}

		if(a[i]<min){
			min = a[i];
		}
	}

	printf("\n Maximum number = %d",max);

	printf("\n Minimum number = %d",min);

	// Sort array in ascending order
	for(i=0;i<10;i++){

		for(j=i+1;j<10;j++){

			if(a[i]>a[j]){

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\n Sorted array:\n");

	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}

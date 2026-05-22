#include<stdio.h>

main(){

	int a[100],n,i,sum=0;
	float avg;

	printf("\n Enter number of elements");
	scanf("%d",&n);

	printf("\n Enter numbers");

	for(i=0;i<n;i++){

		scanf("%d",&a[i]);

		sum = sum + a[i];
	}

	avg = sum / (float)n;

	printf("\n Sum = %d",sum);

	printf("\n Average = %f",avg);
}

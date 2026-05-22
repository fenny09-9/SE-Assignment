#include<stdio.h>
#include<math.h>

main(){
	int num,orNum,n=0,sum=0,rem,i,temp;

	printf("\n Enter Number");
	scanf("%d",&num);

	orNum = num;
	temp = num;

	// Count Digits
	while(temp != 0){
		n++;
		temp = temp / 10;
	}

	// Armstrong Logic
	while(num != 0){
		rem = num % 10;
		sum = sum + pow(rem,n);
		num = num / 10;
	}

	printf("\n Sum = %d",sum);

	(sum == orNum)?
	printf("\n Number is Armstrong"):
	printf("\n Number is not Armstrong");


	printf("\n\n Armstrong Numbers Between 1 to 1000 are :\n");

	for(i=1;i<=1000;i++){

		int x=i,digit=0,total=0,r,temp2;

		temp2 = x;

		while(temp2 != 0){
			digit++;
			temp2 = temp2 / 10;
		}

		temp2 = x;

		while(temp2 != 0){
			r = temp2 % 10;
			total = total + pow(r,digit);
			temp2 = temp2 / 10;
		}

		if(total == x){
			printf("%d ",x);
		}
	}
}

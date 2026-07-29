#include<stdio.h>

// Function Definition
void reverseString(char str[])
{
	int i,length=0;
	char temp;

	// Find Length
	while(str[length] != '\0'){
		length++;
	}

	// Reverse String
	for(i=0;i<length/2;i++){
		temp = str[i];
		str[i] = str[length-i-1];
		str[length-i-1] = temp;
	}
}

main(){
	char str[100];

	printf("\n Enter String");
	scanf("%s",&str);

	reverseString(str);

	printf("\n Reverse String = %s",str);
}

#include<stdio.h>
#include<string.h>

main(){

	char str1[50],str2[50];

	printf("\n Enter first string");
	scanf("%s",str1);

	printf("\n Enter second string");
	scanf("%s",str2);

	strcat(str1,str2);

	printf("\n Concatenated string = %s",str1);

	printf("\n Length of string = %d",strlen(str1));
}

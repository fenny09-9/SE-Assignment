#include<stdio.h>

main(){

	FILE *fp;
	char str[100];

	// Create and write file
	fp = fopen("data.txt","w");

	printf("\n Enter string");
	gets(str);

	fprintf(fp,"%s",str);

	fclose(fp);

	// Read file
	fp = fopen("data.txt","r");

	fgets(str,100,fp);

	printf("\n File content = %s",str);

	fclose(fp);
}

#include<stdio.h>
main(){
	char name[20];
	printf("\n Enter name:");
	//scanf("%s",name);
	gets(name); //multi word string input
	puts(name);
	//printf("\n name=%s",name);
}

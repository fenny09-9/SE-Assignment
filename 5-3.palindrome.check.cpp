#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str[20], rev[20];
	cout<<"Enter a string: ";
	cin>>str;
	
	strcpy(rev, str);
	strrev(rev);
	
	if(strcmp(str, rev) == 0)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
	}

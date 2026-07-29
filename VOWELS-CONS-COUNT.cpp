#include<stdio.h>

main(){
	char str[100];
	int i=0,vowel=0,consonant=0,digit=0,special=0;

	printf("\n Enter String");
	scanf("%s",&str);

	while(str[i] != '\0'){

		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){

			if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
			   str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				vowel++;
			}
			else{
				consonant++;
			}
		}
		else if(str[i]>='0' && str[i]<='9'){
			digit++;
		}
		else{
			special++;
		}

		i++;
	}

	printf("\n Vowels = %d",vowel);
	printf("\n Consonants = %d",consonant);
	printf("\n Digits = %d",digit);
	printf("\n Special Characters = %d",special);
}

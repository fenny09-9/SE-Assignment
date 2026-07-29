#include<stdio.h>

main(){
	char str[100],longest[100];
	int i=0,word=1,length=0,max=0,j=0,k;

	printf("\n Enter Sentence : ");
	gets(str);

	while(str[i] != '\0'){

		if(str[i] != ' '){
			length++;
		}
		else{
			word++;

			if(length > max){
				max = length;

				for(k=0;k<length;k++){
					longest[k] = str[i-length+k];
				}

				longest[k] = '\0';
			}

			length = 0;
		}

		i++;
	}

	// Check Last Word
	if(length > max){
		max = length;

		for(k=0;k<length;k++){
			longest[k] = str[i-length+k];
		}

		longest[k] = '\0';
	}

	printf("\n Number of Words = %d",word);
	printf("\n Longest Word = %s",longest);
}

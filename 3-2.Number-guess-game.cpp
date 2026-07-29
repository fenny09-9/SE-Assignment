#include<iostream>
using namespace std;

main(){

	int number=50,guess;

	cout<<"\n Guess Number Between 1 to 100";

	while(guess != number){

		cout<<"\n Enter Number : ";
		cin>>guess;

		if(guess > number){
			cout<<"\n  High";
		}
		else if(guess < number){
			cout<<"\n  Low";
		}
		else{
			cout<<"\n Correct Guess";
		}
	}

}

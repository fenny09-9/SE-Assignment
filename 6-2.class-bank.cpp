#include<iostream>
using namespace std;

class BankAccount{
	private:
		float balance;

	public:
		void deposit(){
			float amt;
			cout<<"\nEnter deposit amount:";
			cin>>amt;
			balance = amt;
		}

		void withdraw(){
			float amt;
			cout<<"\nEnter withdraw amount:";
			cin>>amt;
			balance = balance - amt;
		}

		void checkBal(){
			cout<<"\nCurrent Balance:"<<balance;
		}
};

main(){
	BankAccount b;

	b.deposit();
	b.withdraw();
	b.checkBal();
}

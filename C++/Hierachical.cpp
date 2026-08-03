#include<iostream>
using namespace std;
class Account{
	protected:
	char accno[20];
	char accHolder[30];
	char email[30];
	float balance;
	
	public:
		void getInfo(){
			cout<<"\n accno accHolder email init bal:";
			cin>>accno>>accHolder>>email>>balance;
		}
		void checkBal(){
			cout<<"\n current bal: "<<balance;
			}
			
};
class Saving: public Account{
	public:
		void addInterest(){
			balance += (balance*0.01);
		}
};
class Current : public Account{
public:
	void debitAmount(){
		balance -= (balance*0.01);
	}
};
main(){
	cout<<"\n Press 1 for Saving account";
	cout<<"\n Press 2 for Current account";
	int ch;
	cin>>ch;
	if(ch==1){
		Saving s1;
		s1.getInfo();
		s1.addInterest();
		s1.checkBal();
		
	}
	else if(ch==2){
		Current c1;
		c1.getInfo();
		c1.debitAmount();
		c1.checkBal();
	}

   else{
	cout<<"\n Invalid choice";
}
}


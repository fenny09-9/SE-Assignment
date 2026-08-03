#include<iostream>
using namespace std;
class User{
	private:
	//data member
	int uid;
	char username[20];
	char email[20];


   public:
   //member function
   void getUserInfo(){
   	cout<<"\n Enter userid name and email";
   	cin>>uid>>username>>email;
   	 }	
   	 void showUserInfo(){
   	 	cout<<"\n Userid="<<uid<<"Username="<<username;
   	 	cout<<"Email="<<email;
		}
};

main(){
	User u1;
	u1.getUserInfo();
	u1.showUserInfo();
	
}

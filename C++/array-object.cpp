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
   	 	cout<<"\n Userid="<<uid<<"\t Username="<<username;
   	 	cout<<"\t Email="<<email;
		}
};

main(){
	User u[2];
	int i;
	for(i=0;i<2;i++){
		u[i].getUserInfo();
		
	}
	for(i=0;i<2;i++){
		u[i].showUserInfo();
	}
}

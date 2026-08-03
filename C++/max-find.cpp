#include<iostream>
using namespace std;
main(){
	int a,b,c,max,min;
	cout<<"\n Enter a,b and c:";
	cin>>a>>b>>c;
	max = ((a>b)?(a>c?a:c):(b>c?b:c));
	cout<<"\n max value="<<max;
}

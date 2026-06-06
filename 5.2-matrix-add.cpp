#include<iostream>
using namespace std;
main(){
	int a[2][2],b[2][2],sum[2][2];
	
	cout<<"\nEnter elements of first matrix";
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"\nEnter elements of second matrix";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cin>>b[i][j];
		}
	}
	cout<<"\n sum of matrix:";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
			cout<<"\n"<<sum[i][j];
		}
	}
	
}

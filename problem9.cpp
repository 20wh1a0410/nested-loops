#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<" "<<"\t";
	for(int k=1;k<=10;k++)
	{
		cout<<k<<"\t";
	}
	cout<<"\n";
	for(i=1;i<=10;i++){cout<<i<<"\t";
		for(int j=1;j<=10;j++){
			cout<<i*j<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}

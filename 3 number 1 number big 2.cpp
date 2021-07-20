#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter the three number:";
	cin>>n1>>n2>>n3;
	int res;
	if(n1>n2&&n1>n3)
		cout<<n1<<" is big:";
	else if(n2>n3&&n2>n1)
		cout<<n2<<" is big:";
	else
		cout<<n3<<" is big:";
	return 0;
}

#include<iostream>
using namespace std;
int big(int number1,int number2,int number3)
{
	int n1,n2,n3;
		cout << "Enter the three number:";
		cin >> n1 >> n2 >> n3 ;
		if(n1>n2&&n1>n3)
			cout << n1 <<" is big";
		else if(n2>n1&&n2>n3)
			cout << n2 << " is big";
		else
			cout << n3 << " is big";
	return 0;	
}
int main()
{
	int num1,num2,num3;
	big(num1,num2,num3);
	return 0;
}


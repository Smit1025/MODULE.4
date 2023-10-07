#include<iostream>
using namespace std;

int main()
{
	char c;
	float num1, num2;
	
	cout << "Enter an Operator (+,-,*,/): ";
	cin >> c;
	
	// task numbers input
	cout <<"Enter two Numbers:";
	cin >> num1 >> num2;
	
	switch(c)
	{
		case '+':
			cout << num1 <<"+" << num2 << "=" <<num1+num2 << endl;
			break;
		case '-':
			cout << num1 <<"-" << num2 << "=" <<num1-num2 << endl;
			break;
		case '*':
			cout << num1 <<"*" << num2 << "=" <<num1*num2 << endl;
			break;
		case '/':
			cout << num1 <<"/" << num2 << "=" <<num1+num2 << endl;
			break;
		default:
			cout << "Error! Invalid Operator" << endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int first, second, add, subtract, multiply;
	float divide;
	
	cout<<"please enter two integer:";
	cin>>first;
	cin>>second;
	
	add = first+second;
	subtract = first - second;
	multiply = first * second;
	divide = first / second;
	
	cout<<endl<<"sum="<<add;
	cout<<endl<<"difference="<<subtract;
	cout<<endl<<"multiplication="<<multiply;
	cout<<endl<<"division="<<divide;
	
	return 0;
}

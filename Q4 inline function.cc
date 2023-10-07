#include<iostream>
using namespace std;

inline float mul(float a, float b)
{
	return(a*b);
}
inline float div(float a, float b)
{
	return(a/b);
}
int main()
{
	float x,y;
	cout<<"enter the value of x:";
	cin>>x;
	cout<<"enter the value of y:";
	cin>>y;
	cout<<mul(x,y)<<"\n";
	cout<<div(x,y)<<"\n";
	return 0;
}

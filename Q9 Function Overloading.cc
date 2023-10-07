#include <iostream>
using namespace std;

class Calculator 
{
public:

    int calculate(int a, int b) 
    {
        return a + b;
    }

    int calculate(int a, int b, char operation) 
    {
        if (operation == '-') 
        {
            return a - b;
        } else
        {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }

    int calculate(int a, int b, char operation, char operation2) 
    {
        if (operation == '*' && operation2 == '*') 
        {
            return a * b;
        } else 
        {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }

    float calculate(float a, float b) 
    {
        if (b != 0) 
        {
            return a / b;
        } else 
        {
            cout << "Cannot divide by zero!" << endl;
            return 0;
        }
    }
};

int main() 
{
    Calculator calc;
    int num1, num2;
    char operation, operation2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /, **): ";
    cin >> operation;

    if (operation == '+') 
	{
        cout << "Result: " << calc.calculate(num1, num2) << endl;
    } else if (operation == '-') 
	{
        cout << "Result: " << calc.calculate(num1, num2, operation) << endl;
    } else if (operation == '*') 
	{
        cout << "Enter another operation (+, -, *, /): ";
        cin >> operation2;
        if (operation2 == '+' || operation2 == '-' || operation2 == '*') 
		{
            cout << "Result: " << calc.calculate(num1, num2, operation, operation2) << endl;
        } 
		 else 
		{
            cout << "Invalid operation!" << endl;
        }
    } 
    	else if (operation == '/')
	 
	{
        if (num2 != 0) 
		{
            cout << "Result: " << calc.calculate(static_cast<float>(num1), static_cast<float>(num2)) << endl;
        }
		 else 
		{
            cout << "Cannot divide by zero!" << endl;
        }
    }
	    else 
	{
        cout << "Invalid operation!" << endl;
    }

    return 0;
}


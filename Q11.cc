#include<iostream>
using namespace std;
class Concatenation 
{
private:
    string str;
    
public:
    Concatenation() : str("") {}

    Concatenation(string s) : str(s) {}

    Concatenation operator + (const Concatenation& other) 
	{
        Concatenation result;
        result.str = this->str + other.str;
        return result;
    }

    void display() 
	{
        cout << "Concatenated String: " << str << endl;
    }
};

int main() 
{
    Concatenation str1("Hello, ");
    Concatenation str2("World!");

    Concatenation result = str1 + str2; 

    result.display(); 
    
    return 0;
}


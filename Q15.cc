#include <iostream>
using namespace std;

namespace MyNamespace 
{
    template <typename T>
    void swap(T &a, T &b) 
	{
        T temp = a;
        a = b;
        b = temp;
    }
}

int main() 
{
    int num1 = 5, num2 = 10;
    double double1 = 3.14, double2 = 6.28;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "double1 = " << double1 << ", double2 = " << double2 << endl;

    // Swapping integers
    MyNamespace::swap(num1, num2);

    // Swapping doubles
    MyNamespace::swap(double1, double2);

    cout << "\nAfter swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "double1 = " << double1 << ", double2 = " << double2 << endl;

    return 0;
}


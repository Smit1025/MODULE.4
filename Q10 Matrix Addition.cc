#include <iostream>
using namespace std;

class Matrix 
{
private:
    vector<int> data;
    int size;

public:
    Matrix(int size) : size(size) 
	{
        data.resize(size);
    }

    void fillMatrix() 
	{
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < size; ++i) 
		{
            cin >> data[i];
        }
    }

    Matrix operator+(const Matrix& other) 
	{
        Matrix result(size);
        for (int i = 0; i < size; ++i) 
		{
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    void displayMatrix() 
	{
        for (int i = 0; i < size; ++i) 
		{
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "For Matrix 1:" << endl;
    matrix1.fillMatrix();

    cout << "For Matrix 2:" << endl;
    matrix2.fillMatrix();

    Matrix result = matrix1 + matrix2;

    cout << "Resultant Matrix after addition:" << endl;
    result.displayMatrix();

    return 0;
}


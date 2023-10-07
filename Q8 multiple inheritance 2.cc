#include <iostream>
using namespace std;

class Student 
{
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) 
    {
        rollNumber = roll;
    }
};


class Test : public Student 
{
protected:
    int subject1Marks;
    int subject2Marks;

public:
    void setMarks(int marks1, int marks2) 
    {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
};


class Result : public Test 
{
public:
    void displayResult() 
    {
        int totalMarks = subject1Marks + subject2Marks;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    
    Result studentResult;

    studentResult.setRollNumber(101);
    studentResult.setMarks(85, 90);

    studentResult.displayResult();

    return 0;
}


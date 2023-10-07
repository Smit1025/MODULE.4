#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    void initializePerson(string n, int a) 
    {
        name = n;
        age = a;
    }

    void readPersonData() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
protected:
    float percentage;

public:
    void initializeStudent(float p) 
    {
        percentage = p;
    }

    void readStudentData() 
    {
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() 
    {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person 
{
protected:
    float salary;

public:
    void initializeTeacher(float s) 
    {
        salary = s;
    }

    void readTeacherData() 
    {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() 
    {
        cout << "Salary: $" << salary << endl;
    }
};

int main() 
{
    Student student;
    Teacher teacher;

    cout << "Enter student data:" << endl;
    student.readPersonData();
    student.readStudentData();

    cout << "\nEnter teacher data:" << endl;
    teacher.readPersonData();
    teacher.readTeacherData();

    cout << "\nStudent Information:" << endl;
    student.displayPersonData();
    student.displayStudentData();

    cout << "\nTeacher Information:" << endl;
    teacher.displayPersonData();
    teacher.displayTeacherData();

    return 0;
}


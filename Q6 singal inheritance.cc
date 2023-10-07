#include <iostream>
using namespace std;

class Cricketer 
{
protected:
    string name;
    int age;

public:
    void inputData() 
	{
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer 
{
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() 
	{
        inputData(); 
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() 
	{
    
        averageRuns = static_cast<double>(totalRuns) / bestPerformance;
    }

    void displayData() 
	{
        cout << "\nBatsman Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

int main() 
{
    Batsman batsman;
    batsman.inputBatsmanData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}


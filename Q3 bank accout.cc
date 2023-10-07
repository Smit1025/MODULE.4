#include <iostream>
using namespace std;

class BankAccount 
{
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    void setAccountDetails(string name, string accNumber, string type, double initialBalance) 
	{
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Member function to deposit an amount
    void deposit(double amount) 
	{
        balance += amount;
        cout << "Amount " << amount << " deposited successfully. New balance: " << balance << endl;
    }

    void withdraw(double amount) 
	{
        if (amount <= balance) 
		{
            balance -= amount;
            cout << "Amount " << amount << " withdrawn successfully. New balance: " << balance << endl;
        }
		 else 
		 {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    // Member function to display name and balance
    void displayAccountInfo() 
	{
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount myAccount;

    myAccount.setAccountDetails("John Doe", "1234567890", "Savings", 1000.00);
    myAccount.deposit(500.50);
    myAccount.withdraw(200.75);
    myAccount.displayAccountInfo();

    return 0;
}


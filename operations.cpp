#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// global balance variable
double balance = 5000;

// deposit function
void Deposit()
{
    double amount;

    cout << "Enter deposit amount: ";
    cin >> amount;

    // validation
    if(amount <= 0)
    {
        cout << "invalid amount\n";
        return;
    }

    // update balance
    balance += amount;

    cout << "Deposit successful\n";
    cout << "Current balance: " << balance << endl;

    // save statement
    ofstream file("statement.txt", ios::app);

    file << "1"
         << "|" << "Deposit"
         << "|" << amount
         << "|" << balance
         << "|" << "Today"
         << endl;

    file.close();
}

// withdraw function
void Withdraw()
{
    double amount;

    cout << "Enter withdraw amount: ";
    cin >> amount;

    // validation
    if(amount <= 0)
    {
        cout << "invalid amount\n";
        return;
    }

    if(amount > balance)
    {
        cout << "no enough balance\n";
        return;
    }

    // update balance
    balance -= amount;

    cout << "Withdraw successful\n";
    cout << "Current balance: " << balance << endl;

    // save statement
    ofstream file("statement.txt", ios::app);

    file << "1"
         << "|" << "Withdraw"
         << "|" << amount
         << "|" << balance
         << "|" << "Today"
         << endl;

    file.close();
}

// transfer function
void Transfer()
{
    int targetaccount;
    double amount;

    cout << "Enter target account number: ";
    cin >> targetaccount;

    cout << "Enter transfer amount: ";
    cin >> amount;

    // validation
    if(amount <= 0)
    {
        cout << "invalid amount\n";
        return;
    }

    if(amount > balance)
    {
        cout << "no enough balance\n";
        return;
    }

    // update balance
    balance -= amount;

    cout << "Transfer successful\n";
    cout << "Current balance: " << balance << endl;

    // save statement
    ofstream file("statement.txt", ios::app);

    file << "1"
         << "|" << "Transfer"
         << "|" << amount
         << "|" << balance
         << "|" << "Today"
         << endl;

    file.close();
}
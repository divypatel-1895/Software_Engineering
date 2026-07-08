#include<iostream>
#include<string>
using namespace std;

int main()
{
    string bankName, customerName;
    float balance, deposit, withdraw;

    cout << "Enter Bank Name: ";
    getline(cin, bankName);

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Available Balance: ";
    cin >> balance;

    // Deposit
    cout << "\nEnter Amount to Deposit: ";
    cin >> deposit;

    balance = balance + deposit;

    cout << "Balance after Deposit: " << balance << endl;

    // Withdraw
    cout << "Enter Amount to Withdraw: ";
    cin >> withdraw;

    if (withdraw <= balance)
    {
        balance = balance - withdraw;
        cout << "Withdrawal Successful!" << endl;
    }
    else
    {
        cout << "Insufficient Balance!" << endl;
    }

    // Final Details
    cout << "\n========== Account Details ==========" << endl;
    cout << "Bank Name      : " << bankName << endl;
    cout << "Customer Name  : " << customerName << endl;
    cout << "Final Balance  : " << balance << endl;

    return 0;
}

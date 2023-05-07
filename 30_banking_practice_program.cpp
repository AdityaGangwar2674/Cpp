#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        cout << "enter your choice : \n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;
        
        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            cout << '\n';
            break;
        case 2:
            balance += deposit();
            // showBalance(balance);
            cout << '\n';
            break;
        case 3:
            balance -= withdraw(balance);
            // showBalance(balance);
            cout << '\n';
            break;
        case 4:
            cout << "thanks for visiting!";
            cout << '\n';
            break;
        default:
            cout << "invalid";
            cout << '\n';
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    cout << "your balance is ₹ " << setprecision(2) << fixed << balance << '\n';
}
double deposit()
{
    double amount = 0;
    cout << "enter amt to be deposited : ";
    cin >> amount;
    if (amount > 0)
        return amount;
    else
    {
        cout << "invalid amount";
    }
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "enter amt to be withdrawn";
    cin >> amount;
    if (amount > balance)
    {
        cout << "insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        cout << "invalid amt\n";
        return 0;
    }
    else
        return amount;
}
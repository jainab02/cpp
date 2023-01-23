#include <iostream>
using namespace std;
void showbalance(double balance);
double deposit();
double withdraw(double balance);

void showbalance(double balance)
{
    cout << "Your balance is " << balance << "INR" << endl;
}
double deposit()
{
    int amount = 0;
    cout << "Please the amount you want to deposit:";
    cin >> amount;
    // balance+=amount;
    return amount;
}
double withdraw(double balance)
{
    int amount = 0;
    cout << "Please the amount you want to withdraw:";
    cin >> amount;
    return amount;
}

int main(int argc, char const *argv[])
{
    double balance = 1000;
    int n;
    while (n != 4)
    {
        cout << "Welcome to the banking App" << endl;
        cout << "1.checking balance" << endl;
        cout << "2.deposit money" << endl;
        cout << "3.withdraw money" << endl;
        cout << "4.exit" << endl;
        cout << "***********************************************************************************************" << endl;
        cout << "enter your choice:";
        cin >> n;
        cout << "***********************************************************************************************" << endl;
        switch (n)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            // deposit();
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            cout << "thank you!" << endl;
            break;

        default:
            cout << "invalid choice" << endl;
            break;
        }
    }

    return 0;
}

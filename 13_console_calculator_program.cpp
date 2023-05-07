#include <iostream>

using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "**************CALCULATOR*******************" << '\n';

    cout << "enter operator (+,-,*,/) : ";
    cin >> op;

    cout << "enter number 1 : ";
    cin >> num1;

    cout << "enter number 2 : ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "sum = " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        cout << "difference = " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        cout << "product = " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        cout << "division = " << result << '\n';
        break;
    }
    return 0;
}
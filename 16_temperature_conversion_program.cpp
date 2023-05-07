#include <iostream>

using namespace std;

int main()
{
    double temp;
    char unit;

    cout << "****Temperature Convertor****\n";
    cout << "F=Fahrenheit\n";
    cout << "C=Celsius\n";
    cout << "what unit u like to convert to ? ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "enter the temp in celsius : ";
        cin >> temp;
        temp = (1.8 * temp) + 32.0;

        cout << "temperature in fahrenheit is = " << temp << '\n';
    }

    else if (unit == 'C' || unit == 'c')
    {
        cout << "enter the temp in fahrenheit : ";
        cin >> temp;
        temp = (temp - 32.0) / 1.8;

        cout << "temperature in celsius is = " << temp << '\n';
    }

    else
    {
        cout << "please only enter in c or f";
    }

    return 0;
}
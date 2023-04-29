#include <iostream>

using namespace std;

int main()
{
    // integer
    int x; // declaration
    x = 5; // assignment
    int y = 6;
    int sum = x + y;

    cout << x << '\n';
    cout << y << '\n';
    cout << sum << '\n'
         << '\n';

    int age = 18;
    int year = 2023;
    int days = 7;

    cout << age << '\n';
    cout << year << '\n';
    cout << days << '\n'
         << '\n';
    // double
    double price = 10.99;
    double cgpa = 7.5;
    double temp = 30.2;

    cout << price << '\n';
    cout << cgpa << '\n';
    cout << temp << '\n'
         << '\n';

    // character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    cout << grade << '\n';
    cout << initial << '\n';
    cout << currency << '\n'
         << '\n';

    // boolean
    bool student = true;
    bool power = false;
    bool forSale = true;

    cout << student << '\n';
    cout << power << '\n';
    cout << forSale << '\n'
         << '\n';

    // string
    string name = "aditya";
    string day = "Saturday";
    string food = "Pizza";

    cout << name << '\n';
    cout << day << '\n';
    cout << food << '\n'
         << '\n';

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old" << '\n';
    return 0;
}
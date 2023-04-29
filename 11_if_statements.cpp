#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "enter age : ";
    cin >> age;

    if (age >= 100)
    {
        cout << "you're too old to enter this side";
    }
    else if (age >= 18)
    {
        cout << "Welcome to our site";
    }
    else if (age < 0)
    {
        cout << "you haven't been born yet";
    }
    else
    {
        cout << "you're not old enough to enter";
    }
    return 0;
}
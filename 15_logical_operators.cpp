#include <iostream>

using namespace std;

int main()
{
    int temp;
    cout << "enter temperature : ";
    cin >> temp;

    // if (temp > 0 && temp < 30)
    // {
    //     cout << "temperature is good";
    // }
    // else
    // {
    //     cout << "temperature is bad";
    // }

    if (temp <= 0 || temp >= 30)
    {
        cout << "temperature is bad";
    }
    else
    {
        cout << "temperature is good";
    }

    cout << '\n';

    bool sunny = true;

    // if (sunny)
    // {
    //     cout << "it is sunny outside";
    // }
    // else
    // {
    //     cout << "it is cloudy outside";
    // }

    if (!sunny)
    {
        cout << "it is cloudy outside";
    }
    else
    {
        cout << "it is sunny outside";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    string students[] = {"aditya", "bhanu", "abhishek"};

    cout << students[0] << '\n';
    cout << students[1] << '\n';
    cout << students[2] << '\n';

    for (int i = 0; i < sizeof(students) / sizeof(string); i++)
    {
        cout << students[i] << '\n';
    }

    return 0;
}
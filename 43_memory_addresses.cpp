#include <iostream>

using namespace std;

int main()
{
    string name = "aditya";
    int age = 18;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}
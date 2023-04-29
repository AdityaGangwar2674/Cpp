#include <iostream>

using namespace std;

int main()
{
    // string name;
    // cout << "enter your name : ";
    // cin>>name;
    // cout << "hello " << name << '\n';

    string fullName;
    cout << "enter your full name : ";
    getline(cin, fullName);
    cout << "hello " << fullName << '\n';

    int age;
    cout << "whats your age : ";
    cin >> age;
    cout << "you are " << age << " years old" << '\n';


    return 0;
}
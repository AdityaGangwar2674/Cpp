#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "enter your name : ";
    getline(cin, name);

    // if (name.length() > 12)
    // {
    //     cout << "too long name";
    // }
    // else
    // {
    //     cout << "welcome " << name;
    // }

    // if (name.empty())
    // {
    //     cout << "no name";
    // }
    // else
    // {
    //     cout << "welcome " << name;
    // }

    // name.clear();
    // cout << "hello " << name;

    // name.append("@gmail.com");
    // cout << "your mail is " << name;

    // cout << name.at(0);

    // name.insert(0, "b");
    // cout << name;

    // cout<<name.find(' ');

    name.erase(0, 3);
    cout << name;

    

    return 0;
}
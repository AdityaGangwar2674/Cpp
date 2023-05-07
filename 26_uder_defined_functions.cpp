#include <iostream>

using namespace std;

void happyBirthday(string name, int age);

int main()
{
    string name = "aditya";
    int age = 18;

    happyBirthday(name, age);

    return 0;
}
void happyBirthday(string name, int age)
{
    cout << "Happy Birthday To " << name << '\n';
    cout << "Happy Birthday To " << name << '\n';
    cout << "Happy Birthday Dear " << name << '\n';
    cout << "Happy Birthday To " << name << '\n';
    cout << "you are " << age << " years old"<<'\n';
}
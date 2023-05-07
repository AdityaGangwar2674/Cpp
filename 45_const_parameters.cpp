#include <iostream>

using namespace std;
void printinfo(const string name, const int age);

int main()
{
    string name = "aditya";
    int age = 18;
    printinfo(name, age);
    
    return 0;
}

void printinfo(const string name, const int age)
{
    cout << name << '\n';
    cout << age << '\n';
}
#include <iostream>

using namespace std;
class human
{
public:
    string name;
    string occupation;
    int age;

    void eat()
    {
        cout << "this person is eating\n";
    }
    void drink()
    {
        cout << "this person is drinking\n";
    }
    void sleep()
    {
        cout << "this person is sleeping\n";
    }
};

int main()
{
    human h1;
    h1.name = "aditya";
    h1.occupation = "student";
    h1.age = 18;

    cout << h1.name << '\n';
    cout << h1.occupation << '\n';
    cout << h1.age << '\n';

    h1.eat();
    h1.drink();
    h1.sleep();

    return 0;
}
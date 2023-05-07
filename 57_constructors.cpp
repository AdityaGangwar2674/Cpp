#include <iostream>

using namespace std;
class student
{
public:
    string name;
    int age;
    double gpa;

    student(string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};
int main()
{
    student s1("aditya", 18, 7.6);

    cout << s1.name << '\n';
    cout << s1.age << '\n';
    cout << s1.gpa << '\n';
    return 0;
}
#include <iostream>

using namespace std;
struct student
{
    string name;
    double gpa;
    bool enrolled;
};

int main()
{
    student s1;
    s1.name = "aditya";
    s1.gpa = 7.6;
    s1.enrolled = true;

    cout << s1.name << '\n';
    cout << s1.gpa << '\n';
    cout << s1.enrolled << '\n';
    return 0;
}
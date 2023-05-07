#include <iostream>

using namespace std;

int main()
{
    double gpa = 7.60;
    string name = "adiyta";
    char grade = 'B';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    string students[] = {"Adi", "Bhanu", "Chandan", "Dhanya", "Emani", "Farhan"};

    cout << sizeof(gpa) << " bytes\n";
    cout << sizeof(name) << " bytes\n";
    cout << sizeof(grade) << " bytes\n";
    cout << sizeof(student) << " bytes\n";
    cout << sizeof(grades) / sizeof(char) << " elements\n";
    cout << sizeof(students) << " elements\n";
    return 0;
}
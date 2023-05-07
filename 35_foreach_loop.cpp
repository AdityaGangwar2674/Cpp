#include <iostream>

using namespace std;

int main()
{
    string students[] = {"aditya", "bhanu", "abhishek", "dhanya"};
    int grades[] = {65, 96, 87, 79};

    for (string st : students)
    {
        cout << st << '\n';
    }
    for (int grade : grades)
    {
        cout << grade << '\n';
    }

    return 0;
}
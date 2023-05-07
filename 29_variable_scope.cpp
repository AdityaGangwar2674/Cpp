#include <iostream>

using namespace std;
int mynum = 3;

void printnum();
int main()
{
    int mynum = 1;
    cout << mynum << '\n';

    printnum();

    return 0;
}

void printnum()
{
    int mynum = 2;
    cout << mynum;
}
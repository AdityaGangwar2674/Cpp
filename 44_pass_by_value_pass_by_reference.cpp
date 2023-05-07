#include <iostream>

using namespace std;
void swap(string &x, string &y);
int main()
{
    string x = "cold-drink";
    string y = "water";
    string temp;
    swap(x, y);

    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n';
    cout << "memory of x = " << &x << '\n';
    cout << "memory of y = " << &y << '\n';

    return 0;
}

void swap(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}
#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "enter marks : ";
    cin >> marks;
    marks >= 60 ? cout << "pass" : cout << "fail";

    cout << '\n';

    int num;
    cout << "enter number : ";
    cin >> num;
    num % 2 == 0 ? cout << "even" : cout << "odd";

    return 0;
}
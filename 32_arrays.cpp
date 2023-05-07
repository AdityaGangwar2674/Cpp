#include <iostream>

using namespace std;

int main()
{
    string car[] = {"Swift Dzire", "Swift", "WagnoR"};
    car[1] = "ciaz";
    cout << car[0] << '\n';
    cout << car[1] << '\n';
    cout << car[2] << '\n';
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    double c;

    cout << "enter side a : ";
    cin >> a;

    cout << "enter side b : ";
    cin >> b;

    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "side c = " << c << '\n';
    return 0;
}
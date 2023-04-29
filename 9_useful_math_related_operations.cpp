#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 3;
    int y = 4;
    int a, b, z;

    a = max(x, y);
    b = min(x, y);
    // z = pow(2,10);
    // z = pow(x, y);
    // z = sqrt(81);
    // z = abs(-10);
    // z = round(3.24);
    // z = ceil(3.99);
    z = floor(3.59);

    cout << a << '\n';
    cout << b << '\n';
    cout << z << '\n';

    return 0;
}
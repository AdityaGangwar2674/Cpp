#include <iostream>

using namespace std;
int factorial(int num)
{
    int res = 1;
    for (int i = 1; i <= num; i++)
    {
        res *= i;
    }
    return res;
}
int main()
{

    cout << factorial(10);
    return 0;
}
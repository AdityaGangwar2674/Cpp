#include <iostream>

using namespace std;

int main()
{
    int *ptr = nullptr;
    int x = 123;
    ptr = &x;

    if (ptr == nullptr)
    {
        cout << "address was not assigned\n";
    }
    else
    {
        cout << "address was assigned\n";
        cout << *ptr;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }
        cout << i << '\n';
    }

    cout << '\n'
         << '\n';

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        cout << i << '\n';
    }
    return 0;
}
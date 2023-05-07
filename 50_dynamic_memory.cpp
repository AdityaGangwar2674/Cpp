#include <iostream>

using namespace std;

int main()
{
    int *pnum = NULL;
    pnum = new int;
    *pnum = 21;

    cout << "address :  " << pnum << '\n';
    cout << "value :  " << *pnum << '\n';

    delete pnum;

    char *pgrade = NULL;
    int size;
    cout << "how many grades to enter in ? : ";
    cin >> size;

    pgrade = new char[5];

    for (int i = 0; i < size; i++)
    {
        cout << "entee grade #" << i + 1 << " : ";
        cin >> pgrade[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << pgrade[i] << " ";
    }

    delete[] pgrade;

    return 0;
}
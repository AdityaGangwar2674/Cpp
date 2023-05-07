#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << j << ' ';
        }
        cout << '\n';
    }

    int rows;
    int columns;
    char symbol;

    cout << "no. of rows : ";
    cin >> rows;

    cout << "no. of columns : ";
    cin >> columns;

    cout << "enter a symbol : ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbol << ' ';
        }
        cout << '\n';
    }

    return 0;
}
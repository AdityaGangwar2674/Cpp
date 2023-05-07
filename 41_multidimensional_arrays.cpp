#include <iostream>

using namespace std;

int main()
{
    string cars[3][4] = {"mustang", "escape", "f-150", "swift dzire", "swift", "dzire", "tiago", "nano", "nexon"};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; i++)
        {
            cout << cars[i][j] << " ";
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    string food[5];
    int size = sizeof(food) / sizeof(food[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "enter a food u like #" << i + 1 << " : ";
        getline(cin, food[i]);
    }

    cout << "you like the following food :\n";
    for (int i = 0; i < size; i++)
    {
        cout << food[i] << '\n';
    }

    return 0;
}
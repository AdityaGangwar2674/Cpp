#include <iostream>

using namespace std;

int main()
{
    string food[100];

    fill(food, food + 100, "pizza");

    for (string foods : food)
    {
        cout << foods << '\n';
    }
    return 0;
}
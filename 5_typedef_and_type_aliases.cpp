#include <iostream>
#include <vector>

using namespace std;

// typedef vector<pair<string, int>> pairlist_t;

typedef string text_t;
typedef int number_t;

using text_t = string;
using number_t = int;

int main()
{
    text_t firstname = "Aditya";
    cout << firstname << '\n';

    number_t age = 18;
    cout << age << '\n';

    return 0;
}
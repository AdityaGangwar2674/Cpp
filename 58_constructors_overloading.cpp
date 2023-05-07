#include <iostream>

using namespace std;
class pizza
{
public:
    string topping1;
    string topping2;

    pizza(string topping1)
    {
        this->topping1 = topping1;
    }
    pizza(string topping1, string topping2)
    { 
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};
int main()
{
    pizza p1("onion");
    pizza p2("corn", "onion");
    cout << p1.topping1 << '\n';
    cout << p2.topping1 << '\n';
    cout << p2.topping2 << '\n';

    return 0;
}
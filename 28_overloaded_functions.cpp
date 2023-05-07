#include <iostream>

using namespace std;
void bakePizza();
void bakePizza(string topping1);
int main()
{
    bakePizza();
    bakePizza("onion");
    return 0;
}

void bakePizza()
{
    cout << "here is pizza\n";
}
void bakePizza(string topping1)
{
    cout << "here is your " << topping1 << " pizza\n";
}
#include <iostream>

using namespace std;
class animal
{
public:
    bool alive = true;

    void eat()
    {
        cout << "this animal is eating\n";
    }
};
class dog : public animal
{
public:
    void bark()
    {
        cout << "dogs can bark\n";
    }
};

class cat : public animal
{
public:
    void meow()
    {
        cout << "cats can meow\n";
    }
};

int main()
{
    dog dog;
    cat cat;

    cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    cout << cat.alive << '\n';
    cat.eat();
    cat.meow();
    return 0;
}
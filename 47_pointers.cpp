#include <iostream>

using namespace std;

int main()
{
    string name = "aditya";
    int age = 18;
    string freepizza[5] = {"p1", "p2", "p3", "p4", "p5"};

    string *pname = &name;
    int *page = &age;
    string *pfreepizza = freepizza;

    cout << pname << '\n';
    cout << page << '\n';
    cout << pfreepizza << '\n';

    cout << "Hello " << *pname << endl;
    cout << "you are " << *page << " old" << endl;
    cout << *pfreepizza << endl;
    return 0;
}
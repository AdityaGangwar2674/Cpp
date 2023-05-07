#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randnum = (rand() % 5) + 1;

    switch (randnum)
    {
    case 1:
        cout << "you win a bumper sticker \n";
        break;
    case 2:
        cout << "you win a bike \n";
        break;

    case 3:
        cout << "you win a t-short \n";
        break;
    case 4:
        cout << "you win a free lunch \n";
        break;
    case 5:
        cout << "you win a concert sticker \n";
        break;
    }
    return 0;
}
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int num, guess, tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    // cout << num;

    cout << "**** Number guessing game ****\n";

    do
    {
        cout << "enter a number (1-100) :  ";
        cin >> guess;

        tries++;

        if (guess > num)
        {
            cout << "too high\n";
        }
        else if (guess < num)
        {
            cout << "too low\n";
        }
        else
        {
            cout << "CORRECT! # of tries : " << tries;
        }
    } while (guess != num);
    return 0;
}
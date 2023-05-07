#include <iostream>

using namespace std;
enum day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};
int main()
{
    day today = sunday;
    switch (today)
    {
    case sunday:
        cout << "sunday";
        break;
    case monday:
        cout << "monday";
        break;
    case tuesday:
        cout << "tuesday";
        break;
    case wednesday:
        cout << "wednesday";
        break;
    case thursday:
        cout << "thursday";
        break;
    case friday:
        cout << "friday";
        break;
    case saturday:
        cout << "saturday";
        break;
    }
    return 0;
}
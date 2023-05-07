#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "enter the month (1-12) : ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    default:
        cout << "enter only in numbers (1-12)";
        break;
    }
    cout << '\n';


    
    char grade;
    cout << "enter your grade : ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "you are outstanding";
        break;
    case 'B':
    case 'b':
        cout << "you are excellent";
        break;
    case 'C':
    case 'c':
        cout << "you are good";
        break;
    case 'D':
    case 'd':
        cout << "you are poor";
        break;
    default:
        cout << "you failed";
        break;
    }
    return 0;
}
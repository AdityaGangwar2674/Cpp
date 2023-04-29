#include <iostream>

using namespace std;

int main()
{
    double x = 3.14;
    double y = (int)3.14;
    cout << x << '\n';
    cout << y << '\n';

    char c = 100;
    cout << c << '\n';
    cout << (char)100 << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    cout << score << "%" << '\n';

    return 0;
}
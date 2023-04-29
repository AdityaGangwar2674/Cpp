#include <iostream>

using namespace std;

int main()
{
    int student = 20;
    student = student + 1;
    student += 1;
    student++;

    student = student - 2;
    student -= 2;
    student--;

    student = student * 3;
    student *= 3;

    student = student / 2;
    student /= 2;

    int rem = student % 2;

    cout << student << '\n';
    cout << rem << '\n'
         << '\n'
         << '\n';



    // precedence
    // parentheses
    // multiplication and division
    // addition and subtraction

    int students = 6 - (5 + 4) * 3 / 2;

    cout << students << '\n';

    return 0;
}
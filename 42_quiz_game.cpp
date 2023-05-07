#include <iostream>

using namespace std;

int main()
{
    string questions[] = {"1. what year was C++ was created ? : ", "2. who invented C++ ? : ", "3. what is th epredecessor of C++? : ", "4. is the earth flat ? : "};

    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"}, {"A. guido", "B. Bjarne", "C. Carmack", "D. zuckerberg"}, {"A. C", "B. C+", "C. C--", "D. B++"}, {"A. yes", "B. no", "C. maybe", "D. dont know"}};

    char answerkey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        cout << "***************\n";
        cout << questions[i] << '\n';
        cout << "***************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << '\n';
        }
        cin >> guess;
        guess = toupper(guess);
        if (guess == answerkey[i])
        {
            cout << "correct\n";
            score++;
        }
        else
        {
            cout << "wrong\n";
            cout << "correct answer - " << answerkey[i] << '\n';
        }
    }
    cout << "correct guess" << score << '\n';
    cout << "# of questions " << size << '\n';
    cout << "your score " << (score / (double)size) * 100 << "%" << '\n';
    return 0;
}
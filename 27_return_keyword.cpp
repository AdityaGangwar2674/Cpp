#include <iostream>

using namespace std;
double square(double len);

double cube(double len);

string concatStrings(string string1, string string2);
int main()
{
    double len = 5.0;
    double area = square(len);
    cout << "area : " << area << " cm^2\n";

    double volume = cube(len);
    cout << "volume : " << volume << " cm^3\n";

    string firstName = "Aditya";
    string lastName = "Gangwar";
    string fullName = concatStrings(firstName, lastName);
    cout << "Hello " << fullName;
    return 0;
}

double square(double len)
{
    double res = len * len;
    return res;
}

double cube(double len)
{
    double res = len * len * len;
    return res;
}

string concatStrings(string string1, string string2)
{
    return string1 + " " + string2;
}
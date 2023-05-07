#include <iostream>

using namespace std;
class stove
{
private:
    int temperature = 0;

public:
    int gettemp()
    {
        return temperature;
    }
    void settemp(int temperature)
    {
        this->temperature = temperature;
    }
};
int main()
{
    stove stove;
    // stove.temperature = 10000;
    stove.settemp(10000);
    cout << "The temperature is " << stove.gettemp() << '\n';
    return 0;
}
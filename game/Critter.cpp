//simple critter
//demonstrates creating a new type
#include <iostream>
using namespace std;
class Critter
{
public:
    int m_Hunger;
    void Greed();
};
void Critter::Greed()
{
    cout << "Hi i'm critter my hunger level is " << m_Hunger << "\n";
}
int main()
{
    Critter crit1;
    crit1.m_Hunger = 9;
    cout << crit1.m_Hunger << endl;
    crit1.Greed();
    getchar();
    return 0;
}

//critter farm
//demostrates object containment
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Critter
{
public:
    Critter(const string& name = "");
    string GetName()const;
private:
    string m_Name;

};
Critter::Critter(const string& name):m_Name(name)
{}
inline string Critter::GetName()const
{
    return m_Name;
}
class Farm
{
public:
    Farm(int space = 1);
    void Add(const Critter& aCri);
    void RollCall()const;
private:
    vector<Critter> m_Critters;
};
Farm::Farm(int space)
{
    m_Critters.reserve(space);
}
void Farm::Add(const Critter& aCri)
{
    m_Critters.push_back(aCri);
}
void Farm::RollCall() const
{
    for(vector<Critter>::const_iterator iter = m_Critters.begin();
        iter!= m_Critters.end();++iter)
    {
        cout << iter->GetName() << "here \n";
    }
}
int main()
{
    Critter crit("Poochis");
    cout << "My Critter's name is " << crit.GetName() << endl;
    cout << "Create a critter farm. \n";
    Farm myFarm;
    cout << "\n Adding three critters to the farm \n";
    myFarm.Add(Critter("Move"));
    myFarm.Add(Critter("Move2"));
    myFarm.Add(Critter("Move3"));
    cout << "\n Calling Roll.. \n";
    myFarm.RollCall();
    getchar();
    return 0;
}

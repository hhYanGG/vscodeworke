#include <iostream>
using namespace std;
class Critter
{
public:
    Critter(int hunger = 0,int boredom = 0);
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
private:
    int m_Hunger;
    int m_Boredom;
    int GetMood() const;
    void PassTime(int time = 1);
};
Critter::Critter(int hunger,int boredom):m_Hunger(hunger),m_Boredom(boredom)
{ 

}
inline int Critter::GetMood()const
{
    return(m_Hunger + m_Boredom);
}
void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
}
void Critter::Talk()
{
    cout << "I' critter and i feel";
    int mood = GetMood();
    if(mood > 15)
        cout << "Mad \n";
    else if(mood > 10 )
        cout << "frustrated \n";
    else if(mood > 5)
        cout << "okay \n";
    else 
        cout << "happy \n";
    
}
void Critter::Eat(int food)
{
    cout << "brrupp \n";
    m_Hunger -= food;
    if(m_Hunger < 0)
        m_Hunger = 0;
    PassTime();
}
void Critter::Play(int fun)
{
    cout << "wheeee \n";
    m_Boredom -= fun;
    if(m_Boredom < 0)
        m_Boredom = 0;
    PassTime();
}
int main()
{
    Critter crit;
    crit.Talk();
    int choice;
    do
    {
        cout << " \n pet \n";
        cout << "0 - quied \n";
        cout << "1 - listen \n";
        cout << "2 - feed \n";
        cout << "3 -　palu \n";
        cout << "choice ";
        cin >> choice;
        switch (choice)
        {
            case 0:
                cout << "byebye \n";
                break;
            case 1:
                crit.Talk();
                break;
            case 2:
                crit.Eat();
                break;
            case 3:
                crit.Play();
                break;
            default:
                cout << "\n sorry " << choice <<"is not a valid choice. \n";
        }
    }while(choice != 0);
    return 0;
}
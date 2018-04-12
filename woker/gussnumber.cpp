// Guss Number.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int tried = 0;
    cout << "input number to guess ";
    do{
        tried++;
        cin >> guess;
        if(guess > secretNumber){
            cout << " too high " << endl;
        }
        else if (guess < secretNumber){
            cout << " too low "<< endl; 
        }else {
            cout << "bingo  number is " << secretNumber <<"you tried "<< tried <<" times "<< endl;
        }
    }while(guess != secretNumber);
    while(1);
}
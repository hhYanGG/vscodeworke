//util1/sharedptr1.cpp
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

int main()
{
    //two shared pointers represening two persons by theite name
    shared_ptr<string> pNico(new string("nico"));
    shared_ptr<string> pJutta(new string("jutta"));

    //capitalize person names
    (*pNico)[0] = 'N';
    pJutta->replace(0, 1,"J");

    //put the multiple times in container
    vector<shared_ptr<string>> whoMadeCoffee;
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);

    //print all elements
    for( auto ptr : whoMadeCoffee){
        cout << *ptr << " ";
    }
    cout << endl;

    //overwrite a name again
    *pNico = "Nicolai";

    for(auto ptr : whoMadeCoffee){
        cout << *ptr << " ";
    }
    cout << endl;

    //print some internal data
    cout << "use_count : " <<whoMadeCoffee[0].use_count() << endl;
    while(1);
}
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<char> mylist;
    for(char c = 'a'; c <= 'z'; ++c)
    {
        mylist.push_back(c);
    }
    list<char>::const_iterator cit;
    for(cit = mylist.begin(); cit != mylist.end(); ++cit)
    {
        cout << *cit << " ";
    }
    return 0;
}
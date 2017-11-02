// testing the template stack class
#include <iostream>
#include <string>
#include <cctype>
#include "stackp.h"
using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st; //create an empty stack
    char ch;
    std::string po;
    cout << "Please enter A to add a cuochase order, \n"
        << "P to process a PO or Q to quit. \n";
    while (cin >> ch && std::toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a po number to add: ";
                      cin >> po;
                      if(st.isfull())
                          cout << "Stack already full\n";
                      else
                           st.push(po);
                      break;
            case 'P':
            case 'p': if(st.isempty())
                          cout << "stack already empty\n";
                      else
                      {
                          st.pop(po);
                          cout << "#po  " << po << " poped\n";
                          break;
                      }
                          
        }
        cout << "Please enter A to add purchse order.\n"
             << "p to process a PO or Q to quit \n";
    }
    cout << "Bye\n";
    return 0;
}
//append.cpp -- appending information to a file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const char * file = "guest.txt";
int main()
{
    using namespace std;
    char ch;
    //show inital contents
    ifstream fin;
    fin.open(file);

    if(fin.is_open())
    {
        cout << "Here are the current content of the"
            << file << "file:\n";
        while(fin.get(ch))
            cout << ch;
        fin.close();
    }
    //add new name
    ofstream fout(file, ios::out | ios::app);
    if(!fout.is_open())
    {
        cerr << "Can't open " << file << "file for out put\n";
        exit(EXIT_FAILURE);
    }
    cout << "Enter guest name (enter a blank line to quit):\n";
    string name;
    while(getline(cin,name) && name.size() > 0)
    {
        fout << name << endl;
    }
    fout.close();
    //show new files
    fin.clear();
    fin.open(file);
    if(fin.is_open())
    {
        cout << "Here are the new content of the "
            << file << "file\n";
        while(fin.get(ch))
            cout << ch;
        fin.close();
    }
    cout << "Done\n";
    return 0;
}
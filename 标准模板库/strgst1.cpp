//strgst1.cpp -- applying the STL to a string
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    using namespace std;
    string letters;
    cout << " Enter the letter grouping (quite to quit): ";
    while(cin >> letters && letters != "quit")
    {
        cout << "Permutations of " << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
        while(next_permutation(letters.begin(), letters.end()))
            cout << letters << endl;
        cout << "Enter next sequence (quit to quit)";
    }
    cout << "Done\n";
    return 0;
}
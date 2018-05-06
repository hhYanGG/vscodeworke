#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> coll {1, 2, 3, 4,5, 6, 4, 7, 8, 9, 2, 10};
    vector<int>::iterator pos25,pos35;
    auto pos = find_if(coll.begin(), coll.end(),
                                [](int i){
                                    return i == 25 || i == 35;
                                });
    if(pos == coll.end()){
        cout << "no 25 , 35";
    }else if(*pos == 25){
        cout << "25 front 35" << endl;
        pos25 = pos;
        pos35 = find(pos++, coll.end(), 35);
        cout << *pos25 << *pos35 << endl;
    }else{
        cout << "35 front 25";
        pos35 = pos;
        pos25 = find(++pos, coll.end(), 25);
        cout << *pos25 << *pos35 << endl;
    }
    while(1);
}   
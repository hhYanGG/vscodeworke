#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> coll;
    copy(istream_iterator<string>(cin),
        istream_iterator<string>(),
        back_insert_iterator(coll));
    sort(coll.begin(), coll.end());

    unique_copy(coll.cbegin(),coll.cend(),
                ostream_iterator<string>(cout,"/n"));
    
    
}
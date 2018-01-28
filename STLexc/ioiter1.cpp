#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> coll1;
    copy(istream_iterator<string>(cin),
        istream_iterator<string>(),
        back_insert_iterator(coll1));
    sort(coll1.begin(), coll1.end());
    unique_copy(coll1.begin(),coll1.end(),
                ostream_iterator<string>(cout, "\n"));

}
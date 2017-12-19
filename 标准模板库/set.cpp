//settops.cpp -- some set operations
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;
    const int N = 6;
    string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
    string s2[N] = {"matl", "any", "food", "elegant", "deliver", "for"};

    std::set<string> A(s1, s1 + N);
    std::set<string> B(s2, s2 + N);

    ostream_iterator<string, char> out(cout, " ");
    cout << "set A: ";
    copy(A.begin(), A.end(), out);
    cout << endl;
    cout << "set B: ";
    copy(B.begin(), B.end(), out);
    cout << endl;
    cout << "The unique of A and B:\n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;

    cout << "Intersection of A and B :\n";
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;

    cout << "Difference of A and B:\n";
    set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;

    set<string> C;
    cout << "set C\n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set <string> >(C, C.begin()));
    copy(C.begin(), C.end(), out);
    cout << endl;

    string s3 = ("huyang");
    C.insert(s3);
    cout << "set C after insertion:\n";
    copy(C.begin(), C.end(), out);
    cout << endl;

    cout << "showing a range";
    copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
    cout << endl;
    getchar();

    return 0;
}
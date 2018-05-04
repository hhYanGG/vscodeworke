#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;
template<typename V,typename R>
ostream& operator << (ostream& s,const chrono::duration<V,R>& d){
    s << "[" << d.count() << "]"<< endl;
    return s;
}
int main()
{
    milliseconds ms(7255042);

    hours hh = duration_cast<hours>(ms);
    minutes mm = duration_cast<minutes>(ms % chrono::hours(1));
    seconds ss = duration_cast<seconds>(ms % chrono::minutes(1));
    milliseconds msec = duration_cast<milliseconds>(ms % chrono::seconds(1));

    cout << "raw: " << hh << "::" << mm << "::"
                    << ss << "::" << msec << endl;
    while(1);
}
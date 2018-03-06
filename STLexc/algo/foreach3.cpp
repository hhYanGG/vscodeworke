//foreache3.cpp
#include "algostuf.hpp"

using namespace std;

//function object to process the mean value
class MeanValue{
    private:
      long num;
      long sum;
    public:
      //constructor
      MeanValue() : num(0), sum(0){
      }
      //function call
      // -process one moreelement of the sequence
      void operator() (int elem ){
          num++;// increment count
          sum += elem; //add value
      }
      // return mean value
      operator double() {
          return static_cast<double>(sum) /static_cast<double> (num);
      }       
};
int main()
{
    vector<int> coll;
    INSERT_ELEMENTS(coll, 1, 8);

    // process and print mean value
    auto mv = for_each(coll.begin(),coll.end(),
                        MeanValue());
    cout <<" mean value: " << mv << endl;
    getchar();
}
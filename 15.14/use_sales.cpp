//use_sales.cpp -- nested exception
#include <iostream>
#include "sales.h"
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    double vals1[12] =
    {
        1220, 1100, 1300, 1400, 1800, 2300,
        1100, 3400, 2500, 1600, 1600, 1700
    };

    double vals2[12] =
    {
        12, 11, 22, 21, 32, 34,
        28, 29, 33, 29, 32, 34
    };

    Sales sales1(2011,vals1, 12);
    LabeledSales sales2("Blogtar", 2012, vals2, 12);

    cout << "First try block:\n";
    try
    {
        int i;
        cout << "Year = " << sales1.Year() << endl;
        for(i = 0; i < 12; ++i)
        {
            cout << sales1[i] << ' ';
            if( i % 6 == 5)
                cout << endl;
        }
        cout << "Year = " << sales2.Year() << endl;
        cout << "Label = " << sales2.Label() << endl;
        for(i = 0; i <= 12; ++i)
        {
            cout << sales2[i] << ' ';
            if(i % 6 == 5)
                cout << endl;
        }
        cout << "End of try block 1.\n";
    }
    catch(LabeledSales::nbad_index & bad)
    {
        cout << bad.what();
        cout << "Company: " << bad.label_val() << endl;
        cout << "bad index" << bad.bi_val() << endl;
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        cout << "bad index " << bad.bi_val() << endl;
    }
    cout << " \n Next try block:\n";
    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        cout << " End of try block2.\n";
    }
    catch(LabeledSales::nbad_index & bad)
    {
        cout << bad.what();
        cout << "Company : " << bad.label_val() << endl;
        cout << "bad index " << bad.bi_val() << endl;
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        cout << "bad inde " << bad.bi_val() << endl;
    }
    cout << "done\n";
    return 0;
}
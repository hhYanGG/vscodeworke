//acctabc.cpp - - bank account class methods
#include <iostream>
#include "acctabc.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;

//Abstract Base Class
AcctABC::AcctABC(const string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}
void AcctABC::Deposit(double amt)
{
    if(amt < 0)
        cout << "不允许存入负数值 ";
    else
        balance += amt;
}
void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}
//formatting 的 protected 方法
AcctABC::Formatting AcctABC::SetFormat() const
{
    //设置 ###.## 的格式
    Formatting f;
    f.flag = 
        cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}
void AcctABC::Restore(Formatting & f) const 
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}

//Brass method
void Brass::Withdraw(double amt)
{
    if( amt < 0)
        cout << "必须存入正数值";
    else if(amt <= Balance())
        AcctABC::Withdraw(amt);
    else 
        cout << "存入金额" << amt << "￥"
             << "超过你的balance 交易取消\n";
     
}
void Brass::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "Brass Client" << FullName() << endl;
    cout << "Balance: ￥ " << Balance() << endl;
    Restore(f);
}

//BrassPlus Method
BrassPlus::BrassPlus(const std::string & s,long an,double bal, 
                    double ml,double r) : AcctABC(s, an , bal)
{
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}
void BrassPlus::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "Brass client " << FullName() << endl;
    cout << "Account Number " << AcctNum() << endl;
    cout << "Balance ￥ " << Balance() << endl;
    cout << "Maximum loan " << maxLoan << endl;
    cout << "Owe to bank : ￥ " << owesBank << endl;
    cout.precision(3);
    cout << "Loan rate " << 100 * rate << " % \n";
    Restore(f);
}

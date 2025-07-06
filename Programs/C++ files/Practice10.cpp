#include<iostream>
#include<cstring>

using namespace std;

class atm
{
    private:
    char name[15];
    double acc_no;
    double balance;
    public:
    void setdata()
    {
        cout<<"Please Enter Your Name According To Your CREDIT OR DEBIT card"<<endl;
        cin>>name;
        cout<<"Enter Your 16 digits Account Number"<<endl;
        cin>>acc_no;
        cout<<"Enter You Last Balance"<<endl;
        cin>>balance;
    }
    void getdata();
};
void atm :: getdata()
{
    cout<<"Your Card Name is:"<<name<<endl;
    cout<<"Your Account Number is:"<<acc_no<<endl;
    cout<<"Your Present Account Balance is:"<<balance<<endl;
}

int main()
{
    atm aa;
    aa.setdata();
    cout<<"*******************************************************************************"<<endl;
    cout<<"Your INFO is;"<<endl;
    cout<<"*******************************************************************************"<<endl;
    aa.getdata();
    return 0;
}
#include<iostream>
using namespace std;
long gvari;
int main()
{
    int a, b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    gvari=4444;
    b=a+::gvari;
    cout<<"the addition is:"<<b;
    return(0);


}
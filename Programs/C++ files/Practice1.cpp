#include<iostream>
using namespace std;
int global_variable=10;
int main()
{
    int num1, num2, num3;
    cout<<"Enter the value of First Number"<<endl;
    cin>>num1;
    cout<<"Enter the value of Second Number"<<endl;
    cin>>num2;
    num3=::global_variable+num2+num1;
    cout<<"The Addition of two numbers is:"<<num3<<endl;
    return(0);
}
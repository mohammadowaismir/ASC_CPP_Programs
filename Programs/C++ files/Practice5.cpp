#include<iostream>

using namespace std;
int main()
{
    int choice,i,j;
    cout<<"WELCOME TO MY CALCULATOR"<<endl;
    cout<<"PLEASE ENTER YOUR CHOICE"<<endl;
    cout<<"Press <1> for addition"<<endl;
    cout<<"Press <1> for Substraction"<<endl;
    cin>>choice;
    switch (choice)
    {
        case 1:
        cout<<"WELCOME TO ADDITION"<<endl;
        cout<<"Please enter two numbers"<<endl;
        cin>>i>>j;
        cout<<"The Addition is=:"<<i+j<<endl;
        break;
        case 2:
        cout<<"WELCOME TO SUBTRACTION"<<endl;
        cout<<"Please enter two numbers"<<endl;
        cin>>i>>j;
        cout<<"The Subtraction is=:"<<i-j<<endl;
        break;
    }
    return 0;
}
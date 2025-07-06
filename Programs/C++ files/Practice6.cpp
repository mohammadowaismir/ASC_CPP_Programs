#include<iostream>

using namespace std;
int main()
{
    int marks[5];
    cout<<"Enter The Marks of students"<<endl;
    for ( int i = 0 ; i < 4 ; i++)
    {
        cin>>marks[i];
    }
    cout<<"The Marks Of Students are:"<<endl;
    int i=0;
    while (i<4)
    {
        cout<<marks[i]<<endl;
        i++;
    }
    
    
    return 0;
}
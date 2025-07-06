#include<iostream>
using namespace std;

int main()
{
    int start,end,table;
    cout<<"Enter The Number Which You Want To Display Table"<<endl;
    cin>>table;
    cout<<"Enter The Starting Point Of Table"<<endl;
    cin>>start;
    cout<<"Enter The End Point Of Table"<<endl;
    cin>>end;
    for ( ; start <= end; start++)
    {
        cout<<table<<"*"<<start<<"="<<table*start<<endl;
    }
    
    return 0;
}
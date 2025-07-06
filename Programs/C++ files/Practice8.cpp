#include<iostream>

using namespace std;
int main()
{
    char name[23];
    cout<<"What is your name?"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>name[i];
    }
    cout<<"Your lovly name is"<<endl;
    int i=0;
    while (i!=NULL)
    {
          cout<<i<<endl;
          i++;
    }
    
    return 0;
}
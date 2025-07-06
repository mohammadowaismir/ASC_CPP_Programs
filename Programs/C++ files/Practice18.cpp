#include<iostream>

using namespace std;

int main(){
    int n;
    long double fact=1; 
    cout<<"Enter The Number For Factorial"<<endl;
    cin>>n;
    for (int i =n ; i > 1; i--)
    {
       fact=fact*i; 
    }
    cout<<fact;
}
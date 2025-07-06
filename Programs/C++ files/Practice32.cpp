/* Call By Refrence */
#include<iostream>
#include<string>

using namespace std;

void namechange(string* stringaddress){
    *stringaddress="Owais Mir";
}
int main(){
    string name;
    cout<<"Enter Any Name You Want "<<endl;
    cin>>name;
    cout<<"You Enter "<<name<<" As Your Name. "<<endl;
    namechange(&name);
    cout<<"But Programmer Name is "<<name<<"."<<endl;
    return 0;
}
/* Program For Default Argument*/
#include<iostream>
using namespace std;
//This Function Need Two Parameters If it recives only one
//parameter then second argument is set to 5 eg below
int product(int a , int b=5){
    return a*b; 
}
int main(){
    cout<<"The Product is :"<<product(5)<<endl;
    return 0; 
}
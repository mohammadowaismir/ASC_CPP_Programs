/* Inline Function Example Done By Mohammad Owais Mir*/
#include<iostream>
using namespace std;

inline int product(int x, int y){
    return x*y;
}

int main(){
    int first_num,second_num;
    int multiplication;
    cout<<"Enter any two numbers of Product"<<endl;
    cin>>first_num>>second_num;
    multiplication=product(first_num,second_num);
    cout<<"The Multiplication Of "<<first_num<<" * "<<second_num<<" is "<<multiplication<<endl;
    return 0;
}

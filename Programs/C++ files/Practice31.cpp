/* Call By Refrence Made By Mohammad Owais Mir*/
//SWAPING OF TWO NUMBERS
#include<iostream>

using namespace std;

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int firstnum, secondnum;
    cout<<"Enter The Value Of First Number:"<<endl;
    cin>>firstnum;
    cout<<"Enter The Value Of Second Number:"<<endl;
    cin>>secondnum;
    cout<<"The Value Of First Number is "<<firstnum<<" And The Value Of Second Number is "<<secondnum<<endl;
    swap(&firstnum,&secondnum);
    cout<<"Number After Swaping: "<<endl;
    cout<<"The Value Of First Number is "<<firstnum<<" And The Value Of Second Number is "<<secondnum<<endl;
    return 0;
    
}

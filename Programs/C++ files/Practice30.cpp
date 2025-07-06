/* Call By Value Made By Mohammad Owais Mir*/
#include<iostream>

using namespace std;
//Call By Value
int sum(int,int);//Function Prototyping

int main(){
    int num1,num2;
    cout<<"Enter The Value Of First Number:"<<endl;
    cin>>num1;
    cout<<"Enter The Value Of Second Number:"<<endl;
    cin>>num2;
    int result=sum(num1,num2);
    cout<<"The Addition Of Two Number is: "<<result<<endl;
    return 0;
}
int sum(int a, int b){
    return a+b;
}

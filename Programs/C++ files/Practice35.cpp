/* Program To Addition Of Two Complex Number Using To Classes As Friend */
#include<iostream>
using namespace std;
//Forward Declartion
class Complex;
class Calculator{
    public:
    int add(int x, int y){
        return(x+y);
    }
    Complex sumrealcomplex(Complex,Complex);
};
class Complex{
    private:
    int a,b;
    friend class Calculator;
    public:
    void setcomplex(int m,int n){
        a=m;
        b=n;
    }
    void displaycomplex(void){
        cout<<"Your Complex Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex Calculator::sumrealcomplex(Complex o1, Complex o2){
    Complex res;
}

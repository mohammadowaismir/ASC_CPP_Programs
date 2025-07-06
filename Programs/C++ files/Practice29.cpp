#include<iostream>
using namespace std;
/* After funtion done its work
all the variable get destroy except static
In out case static int b;*/
int fun(int x,int y){
    int z=x+y;
    static int b=1;
    b++;
    cout<<"b:"<<b<<endl;
    return z;
}


int main(){
    int res=fun(10,10);
    cout<<"Addition is:"<<res<<endl;

    cout<<"Addition is:"<<fun(5,5)<<endl;
    cout<<"Addition is:"<<fun(6,6)<<endl;
    cout<<"Addition is:"<<fun(8,8)<<endl;

    return 0;
}
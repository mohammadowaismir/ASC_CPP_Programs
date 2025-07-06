#include<iostream>

using namespace std;
    int factorial(int n)
    {
        int sum=0;
        while (n>=1)
        {
            sum=sum+n;
            n--;
        }
        return sum;
    }
int main()
{
    int num=0;
    cout<<"Enter The Number U Want To Factorial:"<<endl;
    cin>>num;
    cout<<"The factorial of "<<num<<" is:"<<factorial(num);
    return 0;
}
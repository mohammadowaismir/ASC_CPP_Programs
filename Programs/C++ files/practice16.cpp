#include <iostream>

using namespace std;
//Forward Decleration
class num2;

class num1
{
    int a;
    friend void swap(num1 &, num2 &);

public:
    void getnum1(int x)
    {
        a = x;
    }
    void display1(void)
    {
        cout << "First Number is : " << a << endl;
    }
};
class num2
{
    int b;
    friend void swap(num1 &, num2 &);

public:
    void getnum2(int y)
    {
        b = y;
    }
    void display2(void)
    {
        cout << "Second Number is : " << b << endl;
    }
};

void swap(num1 &x1, num2 &x2)
{
    int temp = x1.a;
    x1.a = x2.b;
    x2.b = temp;
}
int main()
{
    num1 n1;
    num2 n2;

    cout << "The Numbers Before Swaping:" << endl;
    n1.getnum1(71);
    n1.display1();

    n2.getnum2(84);
    n2.display2();

    cout << "The Numbers Before Swaping:" << endl;
    swap(n1, n2);
    n1.display1();
    n2.display2();
}
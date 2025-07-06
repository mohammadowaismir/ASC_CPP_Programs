#include <iostream>
using namespace std;
class multiplication
{
    int a;
    int b;

public:
    multiplication(void);//Constructor
    void display()
    {
        cout << " A = " << a << endl;
        cout << " B = " << b << endl;
    }
};
multiplication::multiplication()//Define constructor
{
    a = 5;
    b = 7;
}

int main()
{
    multiplication m;
    m.display();
    return 0;
}
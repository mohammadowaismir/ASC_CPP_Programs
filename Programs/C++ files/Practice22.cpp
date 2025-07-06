#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Your Data is " << a << " And " << b << endl;
    }
};
int main()
{
    complex c1(3, 4);
    c1.display();
    return 0;
}
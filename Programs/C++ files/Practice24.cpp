#include <iostream>

using namespace std;
class area
{
private:
    int a;
    int b;
    int c;
    int d;

public:
    area(int l, int m)
    {
        cout << " Welcome To Get Rectriangle Area: " << endl;
        a = l;
        b = m;
    }
    void display()
    {
        cout << " The Area of Rectriangle is: " << a * b << endl;
    }
};

int main()
{
    area a1(6, 7);
    a1.display();
    return 0;
}
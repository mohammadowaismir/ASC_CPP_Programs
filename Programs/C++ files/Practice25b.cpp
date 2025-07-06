#include <iostream>

using namespace std;
class addition{
private:
    int a;
    int b;
public:
    addition(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The Addition of two numbers is:" << a + b << endl;
    }
    ~addition(){};
};
int main()
{
    addition a(1, 2);
    a.display();
    return 0;
}
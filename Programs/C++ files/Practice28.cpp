//Program for multiplication of two nos. by Mohammad Owais mir
#include <iostream>

using namespace std;
class Production
{
private:
    int a, b;

public:
    int Getnumber(int x, int y);
};
int Production ::Getnumber(int x, int y)
{
    a = x;
    b = y;
    return x * y;
}
int main()
{
    int z;
    Production pro;
    z = pro.Getnumber(9, 9);
    cout << "The Production Of two number is " << z;
    return 0;
}
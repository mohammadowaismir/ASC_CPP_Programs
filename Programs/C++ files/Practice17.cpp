#include <iostream>

using namespace std;
class b;
class a
{
private:
    int x;
    int y;
    friend int fulladd(a, b);

public:
    void getnum1(int i, int j)
    {
        x = i;
        y = j;
    }
};
class b
{
private:
    friend int fulladd(a, b);
    int x1;
    int y1;

public:
    void getnum2(int i1, int j2)
    {
        x1 = i1;
        y1 = j2;
    }
};
int fulladd(a xx, b yy)
{
    int f, g;
    f = xx.x + yy.x1;
    g = xx.y + yy.y1;
    return (f + g);
}

int main()
{
    a aa;
    b bb;
    aa.getnum1(5, 5);
    bb.getnum2(5, 5);

    int res = fulladd(aa, bb);
    cout << "The Final Result Is : " << res;
}
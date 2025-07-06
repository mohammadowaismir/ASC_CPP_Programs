#include <iostream>

using namespace std;
class owais
{
private:
    int a;
    int b;
    friend owais addition(owais o1, owais o2);

public:
    void add(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "Your Numbers Are " << a << " And " << b << endl;
    }
};
owais addition(owais o1, owais o2)
{
    owais o;
    o.add((o1.a + o2.a), (o1.b + o2.b));
    return o;
}
int main()
{
    owais s, t, u;
    s.add(6, 6);
    s.print();

    t.add(4, 6);
    t.print();

    u = addition(s, t);
    u.print();

    return 0;
}
#include <iostream>
#include <cmath> //using for squareroot
using namespace std;
class point
{
private:
    int x1;
    int y1;
    friend int result(point f1, point f2);
public:
    void dist(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
    void display()
    {
        cout << "The Point is (" << x1 << " , " << y1 << ")" << endl;
    }
};
int result(point f1,point f2){
    int res;
    res=sqrt(((f2.x1-f1.x1)*(f2.x1-f1.x1))+((f2.y1-f1.y1)*(f2.y1-f1.y1)));
    return res;
}
int main()
{
    int mm;
    point p, q;

    p.dist(1 , 0);
    p.display();

    q.dist(70 , 0);
    q.display();

    cout<<"The Distance Between First Point And Second Point:"<<endl;
    mm=result(p,q);
    cout<<mm<<endl;
    return 0;
}
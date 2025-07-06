#include <iostream>

using namespace std;

class area
{
    float length;
    float weidth;
    float height;
    float res;

public:
    area() {}
    area(float leng, float wed)
    {
        length = leng;
        weidth = wed;
    }
    area(float leg, float wed, float heig)
    {
        length = leg;
        weidth = wed;
        height = heig;
    }
    void display()
    {
        cout << "The area of rectrianle is " << length * weidth << endl;
    }
};

int main()
{

    area a1(3, 4);
    a1.display();
    return 0;
}
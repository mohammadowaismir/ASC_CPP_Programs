#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var = 10;
    virtual void display()//using virtual becomes invoke base class display
    {
        cout << "The Value Of Base Class Variable Is " << var << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var = 20;
    void display()
    {
        cout << "The Value Of Base Class Variable Is " << var << endl;
    }
};

int main()
{
    BaseClass *baseclasspointer;
    BaseClass b1;
    DerivedClass d1;
    baseclasspointer = &d1;
    baseclasspointer->display();//Here is invoke base class display
    return 0;
}
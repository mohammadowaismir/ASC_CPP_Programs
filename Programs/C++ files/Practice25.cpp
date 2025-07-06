#include <iostream>

using namespace std;
class owais
{
public:
    //constructor
    owais()
    {
        cout << "Constructor is called:" << endl;
    }
    //destructor
    ~owais()
    {
        cout << "Destuctor is called:" << endl;
    }
    //member function
    void display()
    {
        cout << "HELLO WORLD:" << endl;
    }
};
int main()
{
    //object created
    owais obj;
    //member function called
    obj.display();
    return 0;
}
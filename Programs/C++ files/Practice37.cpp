/*CPP Code For Multiple Inheritance Made By Mohammad Owais Mir On 11-06-2021 */
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Calculator
{
protected:
    long num_First;
    long num_Second;

public:
    Calculator() {}
    void setData(long x, long y)
    {
        num_First = x;
        num_Second = y;
        int choice;
    OWAIS:
        cout << "Enter Opration You Want To Perform:" << endl;
        cout << "Press <1> For Addition" << endl;
        cout << "Press <2> For Subtraction" << endl;
        cout << "Press <3> For Multiplication" << endl;
        cout << "Press <4> For Division" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "The Addition Of " << num_First << " + " << num_Second << " = " << num_First + num_Second << endl;
            break;
        case 2:
            cout << "The Subtraction Of " << num_First << " - " << num_Second << " = " << num_First - num_Second << endl;
            break;
        case 3:
            cout << "The Multiplication Of " << num_First << " * " << num_Second << " = " << num_First * num_Second << endl;
            break;
        case 4:
            cout << "The Division Of " << num_First << " / " << num_Second << " = " << num_First / num_Second << endl;
            break;

        default:
            cout << "Please Enter A Vaild Choice: " << endl;
            goto OWAIS;
        }
    }
};

class Scientific
{
protected:
    long base;
    long exp;

public:
    Scientific() {}
    void setChoice()
    {
        int choice;
    OWAIS:
        cout << "Enter Opration You Want To Perform:" << endl;
        cout << "Press <1> For Raised Power" << endl;
        cout << "Press <2> For Square Root" << endl;
        cout << "Press <3> For Square" << endl;
        cout << "Press <4> For Cube" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Any Number And Power Number For Raised " << endl;
            cin >> base >> exp;
            cout << "The Raised Power Of " << base << "^" << exp << " = " << pow(base, exp) << endl;
            break;
        case 2:
            cout << "Enter Any Number For Square Root " << endl;
            cin >> base;
            cout << "The Squart Of " << base << " = " << sqrt(base) << endl;
            break;
        case 3:
            cout << "Enter The Number For Square " << endl;
            cin >> base;
            cout << "The Square Of " << base << " = " << (base * base) << endl;
            break;
        case 4:
            cout << "Enter The Number For Cube " << endl;
            cin >> exp;
            cout << "The Cube Of " << exp << " = " << (exp * exp * exp) << endl;
            break;

        default:
            cout << "Please Enter A Vaild Choice: " << endl;
            goto OWAIS;
        }
    }
};

class Hybrid : public Calculator, public Scientific
{
private:
    long a, b;

public:
    Hybrid()
    {
        cout << "Enter Any Two Numbers:" << endl;
        cin >> a >> b;
        setData(a, b);
    }
};

int main()
{
    Hybrid h1;
    h1.setChoice();
    return 0;
}
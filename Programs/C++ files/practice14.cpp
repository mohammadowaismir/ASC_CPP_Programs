#include <iostream>
#include <windows.h>

using namespace std;
class addition
{
private:
    int num1;
    int num2;
    int num3;

public:
    void result()
    {
        char ray[] = {"Enter The First Number For Arithmatic Oprations: "};
        char ray2[] = {"Enter The Second Number For Arithmatic Opratins: "};
        for (int i = 0; i < strlen(ray); i++)
        {
            cout << ray[i];
            Sleep(50);
        }
        cin >> num1;
        for (int i = 0; i < strlen(ray2); i++)
        {
            cout << ray2[i];
            Sleep(50);
        }
        cin >> num2;
        cout << "Your numbers are: " << num1 << " and: " << num2 << endl;
        int choice;
    shaista:
        cout << "What Arithmatic Opration You Want To Doing With Your Numbers:" << endl;
        cout << "Press <1> for Addition opration:" << endl;
        cout << "Press <2> for Subtraction opration:" << endl;
        cout << "Press <3> for Multiplication opration:" << endl;
        cout << "Press <4> for Division Opration:" << endl;
        cout << "Press <5> for Exit:" << endl;
        cout << "Press <0> reuse the Calculator:" << endl;
        cin >> choice;
        if (choice == 1 || 2 || 3 || 4 || 5 || 0)
        {
            switch (choice)
            {
            case 1:
                cout << "Welcome to Addition Opration:" << endl;
                num3 = num1 + num2;
                cout << "Your Addition is:" << num1 << "+" << num2 << "=" << num3 << endl;
                break;
            case 2:
                cout << "Welcome to Subtraction Opration:" << endl;
                num3 = num1 - num2;
                cout << "Your Subtraction is:" << num1 << "-" << num2 << "=" << num3 << endl;
                break;
            case 3:
                cout << "Welcome to Multiplication Opration:" << endl;
                num3 = num1 * num2;
                cout << "Your Multiplication is:" << num1 << "*" << num2 << "=" << num3 << endl;
                break;
            case 4:
                cout << "Welcome to Division Opration:" << endl;
                num3 = num1 % num2;
                cout << "Your Division is:" << num1 << "%" << num2 << "=" << num3 << endl;
                break;
            case 5:
                cout << "Thank You for Using My Calculator :" << endl;
                break;
            case 0:
                result();
                break;
            default:
                cout << "***PLEASE ENTER A VAILD CHOICE***" << endl;
                goto shaista;
            }
        }
    }
};
int main()
{
    addition a1;
    a1.result();
    return 0;
}
/* Check The Binary Number is Correct or Wrong
    Also ones compliment of binary number: By Mohammad Owais Mir*/
#include <iostream>
#include <string>

using namespace std;
class Binary
{
private: //if i not write here private it is by default private
    string number;

public:
    void read(string);
    void onescomp();
    void display();
};
void Binary ::read(string s)
{
    number = s;
    for (int i = 0; i < number.length(); i++)
    {
        if (number.at(i) != '0' && number.at(i) != '1')
        {
            cout << number << " is incorrect format Not a Binary Number" << endl;
            exit(0);
        }
    }
}
void Binary ::onescomp()
{
    for (int i = 0; i < number.length(); i++)
    {
        if (number.at(i) == '0')
        {
            number.at(i) = '1';
        }
        else
        {
            number.at(i) = '0';
        }
    }
}
void Binary ::display()
{
    cout << "Your Binary Number is ";
    for (int i = 0; i < number.length(); i++)
    {
        cout<<number.at(i);
    }
    cout<<endl;
}
int main()
{

    Binary b1;
    string getnum;
    cout << "Enter Any Binary Number:" << endl;
    cin >> getnum;

    b1.read(getnum);
    b1.display();

    b1.onescomp();
    b1.display();
}
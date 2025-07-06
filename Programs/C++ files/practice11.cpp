#include <iostream>
#include <cstring>

using namespace std;

class addition
{
private:
    string king;
    string queen;
    string princee;

public:
    void setdata()
    {
        cout << "Enter The Value Of king" << endl;
        cin >> king;
        cout << "Enter The Valur Of Queen" << endl;
        cin >> queen;
    }
    void getdata();
    void add()
    {
        princee = king + queen;
        cout << "Your Addition is i think" << princee << endl;
    }
};
void addition ::getdata()
{
    cout << "Your Addition is i think" << princee << endl;
}
int main()
{
    addition a1;
    a1.setdata();
    a1.add();
    a1.getdata();
    return 0;
}
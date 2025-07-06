#include <iostream>
#include <cmath>
using namespace std;
//forward decleration
class marks;
class percentage
{
public:
    void per();
};
class marks
{
private:
    float english;
    float math;
    float urdu;
    float sst;
    float science;

public:
    friend void percentage ::per();
    void getmarks()
    {
    OWAIS:
        cout << "Enter the marks of student in English " << endl;
        cin >> english;
        if (english > 100)
        {
            cout << "Please enter Vaild Marks:" << endl;
            goto OWAIS;
        }
    KAWSAR:
        cout << "Enter the marks of student in Math " << endl;
        cin >> math;
        if (math > 100)
        {
            cout << "Please enter Vaild Marks:" << endl;
            goto KAWSAR;
        }
    EGG:
        cout << "Enter the marks of student in Urdu " << endl;
        cin >> urdu;
        if (urdu > 100)
        {
            cout << "Please enter Vaild Marks:" << endl;
            goto EGG;
        }
    SHAISTA:
        cout << "Enter the marks of student in SST " << endl;
        cin >> sst;
        if (sst > 100)
        {
            cout << "Please enter Vaild Marks:" << endl;
            goto SHAISTA;
        }
    ZEENAT:
        cout << "Enter the marks of student in Science " << endl;
        cin >> science;
        if (science > 100)
        {
            cout << "Please enter Vaild Marks:" << endl;
            goto ZEENAT;
        }
    }
    void total()
    {
        cout << "English = " << english;
        if (english >= 33)
        {
            cout << "\t<P>" << endl;
        }
        else
        {
            cout << "\t<F>" << endl;
        }
        cout << "Math = " << math;
        if (math >= 33)
        {
            cout << "\t<P>" << endl;
        }
        else
        {
            cout << "\t<F>" << endl;
        }
        cout << "urdu = " << urdu;
        if (urdu >= 33)
        {
            cout << "\t<P>" << endl;
        }
        else
        {
            cout << "\t<F>" << endl;
        }
        cout << "sst = " << sst;
        if (sst >= 33)
        {
            cout << "\t<P>" << endl;
        }
        else
        {
            cout << "\t<F>" << endl;
        }
        cout << "Science = " << science;
        if (science >= 33)
        {
            cout << "\t<P>" << endl;
        }
        else
        {
            cout << "\t<F>" << endl;
        }
        cout << "Total = " << english + urdu + sst + math + science << endl;
    }
};
int main()
{
    marks m1;
    m1.getmarks();
    m1.total();
    return 0;
}
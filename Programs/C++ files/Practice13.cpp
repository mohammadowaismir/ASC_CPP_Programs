#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;
class fabnoochi
{
private:
    int n;
    int t1;
    int t2;
    int nt;

public:
    void getdata()
    {
        char ray[] = {"Enter The Number You Want to Fabnnoci Series"};
        for (int i = 0; i < strlen(ray); i++)
        {
            cout << ray[i];
            Sleep(100);
        }
        cin >> n;
    }
    void display()
    {
        t1=0;
        t2=1;
        nt=0;
        cout << "Your Fabnocchi Series is:" << endl;
        for (int i = 1; i <= n; ++i)
        {
            if(i==1)
            {
            cout<<" "<<t1;
            continue;
            }
            if(i==2)
            {
                cout<<t2<<" ";
                continue;
            }
            nt=t1+t2;
            t1=t2;
            t2=nt;
            cout<<nt<<"";
        }
    }
};
int main(){
    fabnoochi f1;
    f1.getdata();
    f1.display();
    return 0;
}
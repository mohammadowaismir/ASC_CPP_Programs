#include<iostream>

using namespace std;
class rehan{
    private:
    int a[6];
    int b[6];
    int c[15];
    public:
    void getadd(){
        cout<<"Enter The First Number"<<endl;
        for (int i = 0; i < 6; i++)
        {
            cin>>a[i];
        }
        cout<<"Enter The 2nd Number"<<endl;
        int i=0;
        while (i<6)
        {
            cin>>b[i];
            i++;
        }
        
    }
    void getresult();
};

void rehan :: getresult(){
    for (int i = 0; i < 7; i++)
    {
        c[i]=a[i]+b[i];
    }
    cout<<"The Addition of two Arrays is:"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<c[i];
    }  
}
int main(){
    rehan r1;
    r1.getadd();
    r1.getresult();
    return 0;
}
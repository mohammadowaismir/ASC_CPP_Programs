#include <iostream>

using namespace std;
//Example of recursion''RECURSION means a function calls own self by itself
int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
int main()
{
    int n, res;
    cout << "Enter The Number For Factorial:" << endl;
    cin >> n;
    res = factorial(n);
    cout << "The Factorial of " << n << " is : " << res;
    return 0;
}
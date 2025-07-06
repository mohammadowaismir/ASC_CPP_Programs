/* Code Written By Mohammad Owais Mir For Single Inheritance*/
#include <iostream>
#include <string>
using namespace std;

static int count;

class Employee
{
private:
    int empId;
    string name;

public:
    Employee() {}
    Employee(int emId, string naam)
    {
        empId = emId;
        name = naam;
    }
    void displayData();
};
void Employee::displayData()
{
    cout << "The Employee No. " << count + 1 << " is " << name << " And His/Her Employee Id is " << empId << endl;
}
class Programmer : public Employee
{
private:
    int salary;
    string month;

public:
    Programmer() {}
    Programmer(int sal, string mon) : Employee(10, "Owais") //These Parameters Passes To Base Class Constructor In Our Case Employee
    {

        salary = sal;
        month = mon;
    }
    void display()
    {
        cout << "And The Salary Of The Employee No. " << count + 1 << " is " << salary << " Of The Present Month " << month << "." << endl;
    }
};
int main()
{
    Programmer p1(15000, "March");
    p1.displayData();
    p1.display();
}

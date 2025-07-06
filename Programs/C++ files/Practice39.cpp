#include<iostream>

using namespace std;
class Employee{
   private:
   int id ;
   string name ;
   public:
   Employee(){

   }
   Employee(Employee e1){
       id=e1.id;
       name=e1.name;
   }
   Employee(int a , string b){
        id = a;
        name = b;
       
   }
   void display();
};

void Employee :: display(){
    cout<<"The Name Of The Person Is "+ name + " And The Id Is "+ id<<endl;
}
int main(){
    Employee e1 = new Employee(101,"Owais");
    Employee e2 = new Employee(e1);
    e2.display();
    return 0 ;
}
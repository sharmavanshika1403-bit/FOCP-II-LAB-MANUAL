#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
    int emp_id;
    double salary;
public:
    Employee(int emp_id,double sal );
    void display();
};

 Employee::Employee(int emp_id,double sal )
{ this->emp_id =emp_id;
  salary=sal;
}
void Employee::display(){
    cout<<"emp_id"<<emp_id<<endl;
    cout<<"salary:"<<salary<<endl;
    
}
int main(){
    Employee e1(2345,20000);
    Employee e2(1234,30000);
    e1.display();
    e2.display();
    return 0;
}

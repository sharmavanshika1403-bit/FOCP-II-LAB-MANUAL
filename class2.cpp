#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    string name;
    int marks;
public:
    student();
    student(string s,int m );
    void displaydetails();
};
 student:: student()
{name = "unknown";
marks=0;
}    
 student:: student(string s,int m)
{ name=s;
    marks=m;
}
void  student::displaydetails(){
    cout<<"name:"<<name<<endl;
    cout<<"marks:"<<marks<<endl;
}
int main(){
     student s1;
     student s2("vanshika",80);
    s1.displaydetails();
    s2.displaydetails();
    return 0;
}

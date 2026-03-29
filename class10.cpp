#include<iostream>
#include<string>
using namespace std;
class Course{
    string Course_name;
    string Instructor_name;
    int Couse_duration;
    public:
    Course(string name,string I_name, int duration){
        Course_name=name;
        Instructor_name=I_name;
        Couse_duration=duration;
    }
    
    void display(){
        cout<<"COURSE NAME:"<<Course_name<<endl;
        cout<<"INSTRUCTOR NAME:"<<Instructor_name<<endl;
        cout<<"COURSE DURATION (WEEKS):"<<Couse_duration<<endl;
    }
    ~Course(){
        cout<<"course deleted"<<endl;
    }
};
int main(){
    Course c1("C LANGUAGE","RICHA SINGH",2);
    c1.display();
    Course c2("C++ LANGUAGE","RICHA SINGH",3);
    c2.display();
    return 0;
}
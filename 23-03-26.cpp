#include<iostream>
using namespace std;
class A{
    int a1,a2;
    public:
    A();
    A(int a1,int a2);
    void display();
};
A::A(){
    a1=0;
    a2=0;
}
A::A(int a1,int a2){
    this->a1=a1; //use of this operator
    this->a2=a2;
}
void A::display(){
    cout<<"a1:"<<a1<<endl;
    cout<<"a2:"<<a2<<endl;
}
int main(){
    A s1;
    A s2(23,45);
    s1.display();
    s2.display();
    return 0;
}
#include<iostream>
using namespace std;
class x{
    int a;
    int b;
    public:
    x();
    x(int n1);
    x(int n1, int n2);
    ~x();
    void display();
};
x::x():a(0),b(0)
{}
x::x(int n1):a(n1),b(n1){

}
x::x(int n1,int n2):a(n1),b(n2){

}
x::~x(){
    cout<<"object destroyed";
}
void x::display(){
    cout<<"a"<<a<<endl;
    cout<<"b"<<b<<endl;
}
int main()
{
    x x1(23);
    x1.display();
    return 0;
}
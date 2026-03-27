#include<iostream>
#include<string>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
    void calculate_area(){
        cout<<"area:"<<length*breadth<<endl;
        }
public:

    Rectangle();
    Rectangle(int l,int b );
    void display();
};

Rectangle:: Rectangle(){
    length=0;
    breadth=0;
 }
 Rectangle::Rectangle(int l,int b)
{ length =l;
  breadth=b;
}
void  Rectangle::display(){
    cout<<"length:"<<length<<endl;
    cout<<"breadth:"<<breadth<<endl;
    calculate_area();
}
int main(){
     Rectangle r1;
     Rectangle r2(30,80);
    r1.display();
    r2.display();
    return 0;
}

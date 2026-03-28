#include<iostream>
#include<string>
using namespace std;
class Furniture
{
private:
    string material;
    double price;
    int legs;
public:
    Furniture();
    Furniture(string material,double price );
    Furniture(string material,double price,int legs);
    void display();
};
 Furniture::Furniture(){
    material="wood";
    price=5000;
    legs=4;
 }
 Furniture::Furniture(string material,double price )
{ this->material =material;
  this->price=price;
}
Furniture::Furniture(string material,double price,int legs){
    this->material=material;
    this->price=price;
    this->legs=legs;

}

void Furniture ::display(){
    cout<<"MATERIAL:"<<material<<endl;
    cout<<"PRICE:"<<price<<endl;
    cout<<"NO. OF LEGS:"<<legs<<endl;
    
}
int main(){
    Furniture f1;
    Furniture f2("wood",4500);
    Furniture f3("wood",8000,6);
    f1.display();
    f2.display();
    f3.display();
    return 0;
}

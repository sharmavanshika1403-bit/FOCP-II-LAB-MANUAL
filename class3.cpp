#include<iostream>
#include<string>
using namespace std;
class Car
{
private:
    string brand;
    double price;
public:
    Car(string b,double p );
    void displaydetails();
};

   
 Car::Car(string b,double p)
{ brand =b;
  price=p;
}
void  Car::displaydetails(){
    cout<<"brand:"<<brand<<endl;
    cout<<"price:"<<price<<endl;
}
int main(){
     Car c1("Maruti Suzuki",500000);
     Car c2("Nexa",800000);
    c1.displaydetails();
    c2.displaydetails();
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Product{
    string Product_name;
    double Price;
    int Quantity;
    public:
    Product(string pname, double Price, int Quantity){
        Product_name=pname;
        this->Price=Price;
        this->Quantity=Quantity;
    }
    void calculate(){
        double total_cost=Price*Quantity;
        cout<<"TOTAL COST:"<<total_cost;
    }
    void display(){
        cout<<"product name:"<<Product_name<<endl;
        cout<<"price:"<<Price<<endl;
        cout<<"quantity:"<<Quantity<<endl;
        calculate();
        cout<<"\n";
    }
    ~Product(){
        cout<<"object destroyed"<<endl;
    }
};
int main(){
    Product p1("water bottle",50,2);
    p1.display();
    Product p2("perfume",5000,2);
    p2.display();
    return 0;
}
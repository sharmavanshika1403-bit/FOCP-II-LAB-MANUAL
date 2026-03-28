#include<iostream>
using namespace std;
class ElectricityBill{
public:
void calculateBill(int units){
    float bill= units*5;
    cout<<"BILL:"<<bill<<endl;
}
void calculateBill(int units, float rate){
    float bill= units*rate;
    cout<<"BILL:"<<bill<<endl;
} 
void calculateBill(int units, float rate, float fixedCharge){
    float bill=(units*rate)+ fixedCharge;
    cout<<"BILL:"<<bill<<endl;
}
};
int main(){
    ElectricityBill e1;
    ElectricityBill e2;
    ElectricityBill e3;
    e1.calculateBill(5);
    e2.calculateBill(5,9.9);
    e3.calculateBill(7,6.8,4.0);
    return 0;
}
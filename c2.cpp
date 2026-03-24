#include <iostream>
using namespace std;
class smart_light{
    int brightness;
    string brand;
    bool ison;
    public:
    smart_light();
    smart_light(string,int,bool);
    void turn_on();
    void turn_off();
    void increasebrightness();
    void decreasebrightness();
    void displaystatus();
    
};
smart_light::smart_light(){
    brand="";
    ison=0;
    brightness=50;
}
smart_light::smart_light(string b,int bright,bool status){
   brand="";
    ison=0;
    brightness=50;
}
void smart_light::turn_on(){
    ison=1;
}
void smart_light::turn_off(){
    ison=0;
}
void smart_light::increasebrightness(){
if(brightness+10>100)
brightness=100;
else
brightness+=10;

}
void smart_light::decreasebrightness(){
    if(brightness-10<1)
brightness=1;
else
brightness-=10;

}
void smart_light::displaystatus(){
    cout<<"brand:"<<brand<<endl;
    cout<<"brightness:"<<brightness<<endl;
    cout<<"ison"<<ison<<endl;
}
int main(){
    smart_light s1;
    s1.displaystatus();
}

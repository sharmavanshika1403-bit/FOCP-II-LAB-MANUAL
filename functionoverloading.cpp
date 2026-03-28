#include<iostream>
using namespace std;
void volume(int side){
    cout<<"volume of cube:"<<side*side*side<<endl;
}
void volume(int length ,int breadth, int height){
    cout<<"volume of cuboid:"<<length*breadth*height<<endl;
}
void volume(double radius, int height){
    cout<<"volume of cylinder:"<<3.14*radius*radius*height<<endl;
}
int main(){
    volume(4);
    volume(4,8,4);
    volume(2,4);
    return 0;
}
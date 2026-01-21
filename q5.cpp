#include<iostream>
int main(){
    int a,b,c;
    std::cout<<"enter the value of a,b respectively:";
    std::cin>>a>>b;
    c=a;
    a=b;
    b=c;
    std::cout<<"value of a"<<a<<"\n value of b"<<b;
    return 0;

}  
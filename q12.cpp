#include<iostream>
int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a){
        if(a==b&&b==c&&c==a){
            std::cout<<"equilateral triangle";
        }else if(a==b||b==c||c==a){
            std::cout<<" isosceles triangle";
        }else if(a!=b&&b!=c&&c!=a){
            std::cout<<"scalene triangle";
        }
    }else{
        std::cout<<"not a triangle";
    }
    return 0;
}
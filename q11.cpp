#include<iostream>
int main(){
    int items, price,total;
    std::cout<<"enter the no. of items and price respectively:";
    std::cin>>items>>price;
    std::cout<<"no. of items:"<<items<<std::endl;
    std::cout<<"price:"<<price<<std::endl;
    total=items*price;
    if(items>1000){
       std::cout<<" price after discount :"<<total-((total)*10/100);
    }else{
        std::cout<<total;
    }
    return 0;
}
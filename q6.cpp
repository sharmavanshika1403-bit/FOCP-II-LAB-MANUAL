#include<iostream>
int main(){
    int net_salary;
    std::cout<<"enter net salary:";
    std::cin>>net_salary;
    std::cout<<"\n net salary:"<<net_salary;
    std::cout<<"\n12% bonus:"<<(net_salary*12)/100;
    std::cout<<"\n net salary after bonus:"<<net_salary+(net_salary*12)/100;
    return 0;
} 
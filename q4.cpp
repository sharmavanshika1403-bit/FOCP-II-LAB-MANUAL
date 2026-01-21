#include<iostream>
int main(){
    int item_no,quantity,unit_price;
    std::cout<<"enter item no, quantity, unit price respectively";
    std::cin>>item_no>>quantity>>unit_price;
    std::cout<<"amount after applying discount"<<(unit_price*quantity)*20/100;
    return 0;
}
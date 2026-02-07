#include<iostream>
int main(){
    int ID;
    std::cout<<"enter event ID";
    std::cin>>ID;
    if(ID%3==0 && ID%5==0){
        std::cout<<"BUZZFUZZ";
    }else if(ID%3==0){
        std::cout<<"BUZZ";
    }else if(ID%5==0){
        std::cout<<"FUZZ";
    }else{
        std::cout<<"NOTBUZZFUZZ";
    }
    return 0;
}

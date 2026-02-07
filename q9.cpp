#include <iostream>
int main(){
    char ch;
    std::cout<<"enter a character";
    std::cin>>ch;
    if(ch>='0'&& ch<='9'){
        std::cout<<"number";
    }else if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
        std::cout<<"vowel";
    }else{
        std::cout<<"consonant";
    }
    return 0;

}
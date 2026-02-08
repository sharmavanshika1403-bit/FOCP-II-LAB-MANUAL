#include <iostream>
int main(){
    int year;
    std::cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        std::cout << "Leap Year";
    } else {
        std::cout << "Not a Leap Year";
    }

    return 0;
}

#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;
if ((year%400 == 0) || ((year%4 == 0) && !(year%100 == 0))){
    ly = true;}
else{
ly = false;
}
    return ly;
    // we *do not print* anything in the function
}

int main(){
    // leap years: expect true
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(2400) == true) << std::endl;
    std::cout << (leap_year(2800) == true) << std::endl;

    // not leap years: expect false
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
    std::cout << (leap_year(2500) == false) << std::endl;
    std::cout << (leap_year(2600) == false) << std::endl;
    std::cout << (leap_year(2700) == false) << std::endl;
    std::cout << (leap_year(2900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;
}

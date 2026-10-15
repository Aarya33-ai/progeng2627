#include <iostream>

int main(){
    double celsius, Fahrenheit;
    std::cout << "What is your temperature in degrees celsius? " << std::endl;
    std::cin >> celsius;

    Fahrenheit = celsius * 1.8 + 32;

    std::cout << "Your temperatere in degrees Fahrenheit is this:  " << Fahrenheit;
}
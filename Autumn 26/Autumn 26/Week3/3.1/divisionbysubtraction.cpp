#include <iostream>

int main(){

    int dividend;
    int divisor, quotient, remainder;

std::cout << "Enter your dividend" << std::endl;
std::cin >> dividend;
std::cout << "Enter your divisor" << std::endl;
std::cin >> divisor;
int count = 0;

while ((dividend > divisor) || (dividend == divisor)){
std::cout << dividend << " is greater than " << divisor << " so we subtract " << divisor << " from " << dividend << " we get " << dividend - divisor << std::endl;
count = count + 1;
std::cout << "Number of subtractions completed is " << count << std::endl;
dividend = dividend - divisor;
}
quotient = count;
remainder = dividend;

std::cout << "The answer is " << quotient << " with remainder " << remainder << std::endl;
}
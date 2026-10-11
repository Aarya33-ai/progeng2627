#include <iostream>

int main(){
    double gbp, euro;
    std::cout << "What is your number in GBP? " << std::endl;
    std::cin >> gbp;

    euro = gbp * 1.18;

    std::cout << "You have this following number in euros " << euro;
}
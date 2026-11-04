#include <iostream>
#include <cmath>

void integer_division(int dividend, int divisor, int& quotient, int& remainder){


    quotient = dividend/divisor;
    remainder = dividend % divisor;


   
}

int main(){

    int dividend, divisor;


    std::cout << "this program finds the quotient of a division and remainder" << std::endl;
    std::cout << "please enter the dividend and divisor:" << std::endl;

    std::cin >> dividend >> divisor;

    int quotient, remainder;

    integer_division(dividend, divisor, quotient, remainder);

        std::cout << "quotient: " << quotient << std::endl;
        std::cout << "remainder: " << remainder << std::endl;
  

}
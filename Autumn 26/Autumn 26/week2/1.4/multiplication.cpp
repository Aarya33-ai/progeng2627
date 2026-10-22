#include <iostream>

int main(){
    double n1, n2, product;
    // this line declares three variables of a numerical type
    // n1, n2, sum are the names of the variables
    // double is the type, which represents general decimal numbers

    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    product = n1 * n2;

    std::cout << n1 << " x " << n2 << " = " <<  product << std::endl;

}
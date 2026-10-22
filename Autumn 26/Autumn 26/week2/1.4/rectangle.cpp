#include <iostream>

int main (){
    double l, w, perimeter, area;

    std::cout << "Please enter the width" << std::endl;
    std::cin >> w;

    std::cout << "Please enter the length" << std::endl;
    std::cin >> l;

    perimeter = l*2 + w*2;
    area = l * w;

    std::cout << "The perimeter is " << perimeter << std::endl;
    std::cout << "The area is " << area << std::endl;
}
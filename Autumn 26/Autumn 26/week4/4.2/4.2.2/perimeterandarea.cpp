#include <iostream>


void perimeter_and_area(double w, double l, double& p, double& a){


    a = w*l;
    p = 2*w + 2*l;


   
}

int main(){

    double w, l;


    std::cout << "this program finds the perimeter and area" << std::endl;
    std::cout << "please enter the w and l:" << std::endl;

    std::cin >> w >> l;

    double p, a;

    perimeter_and_area(w, l, p, a);
        std::cout << "the perimeter and area are :" << std::endl;
        std::cout << "perimeter: " << p << std::endl;
        std::cout << "area: " << a << std::endl;
  

}
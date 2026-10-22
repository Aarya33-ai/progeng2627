#include <iostream>

int main(){
    double weight, height, bmi;
    std::cout << "What is your height in metres? " << std::endl;
    std::cin >> height;

    std::cout << "What is your weight in kilos? " << std::endl;
    std::cin >> weight;
 
    bmi = weight/(height * height);

    std::cout << "Your BMI is:  " << std::endl;
    std::cout << bmi;
}
#include <iostream>

int main(){

int x, power, a;
    

std::cout << "What is x?" << std::endl;
std::cin >> x;
std::cout << "What is your power?" << std::endl;
std::cin >> power;
a = x;


    for(int i = 0; i < power - 1; i++){
        x = x*a;
    }
  std::cout <<x<< std::endl;  
}
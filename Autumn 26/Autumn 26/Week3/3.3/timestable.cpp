#include <iostream>

int main (){

int number;

std::cin >> number;

for(int c2 = 1; c2 < number + 1; c2++){

for(int c = 0; c < number*c2; c = c + c2){
    std::cout << c + c2 << "\t";
}
std::cout << std::endl; 
}
}

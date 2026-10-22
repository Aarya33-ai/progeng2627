#include <iostream>
#include <string>

int main(){
    
    int n;
    int a = 0;

    std::cout << "Enter your number:" << std::endl;
    std::cin >> n;


    while(n != 0 ){

        std::cout << "The sum so far is " << std::endl;
        a = n + a;
        std::cout << a << std::endl;
        std::cout << "Enter your number:" << std::endl;
        std::cin >> n;
    }
}
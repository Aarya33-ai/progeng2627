#include <iostream>

int main(){
    int n, counter = 0; // initialisation of counter

    std::cin >> n;

    while(counter < n){ // condition involving counter
        std::cout << "hello" << std::endl;
        counter = counter + 1; // increment/update of counter
    }
}
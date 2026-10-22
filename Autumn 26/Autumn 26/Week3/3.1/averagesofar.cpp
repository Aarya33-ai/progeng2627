#include <iostream>

int main(){
    
    int count = 0;
    int n;
    float a = 0;
    std::cout << "Enter your number:" << std::endl;
    std::cin >> n;


    while(n != 0 ){
    count = count + 1;
      a = n + a;
      std::cout << "Your average is: " << a/count << std::endl;
      std::cout << "Enter your number:" << std::endl;
      std::cin >> n;
    }
}
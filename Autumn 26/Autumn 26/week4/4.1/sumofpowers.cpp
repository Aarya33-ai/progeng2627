#include <iostream>
#include <cmath>
// header for math operations

int main()
{
    int base = 0, n = 1, a = 0, sum = 0;
std::cout << "please enter a base to calculate sum of powers" << std::endl;
    std::cin >> base;
std::cout << "please enter n" << std::endl;
    std::cin >> n;
a = n;

for(int n = 1; n < a + 1; n++){
    sum = sum + std::pow(base, n);
}
std::cout << sum << std::endl;
}
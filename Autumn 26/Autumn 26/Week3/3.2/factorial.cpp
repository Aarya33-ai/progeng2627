#include <iostream>

int main(){

int factorial, a, b;
b = 1;

std::cout << "Which number do you want to find the factorial of?" << std::endl;
std::cin >> factorial;

if (factorial == 0)
{
    std::cout << "1" << std::endl;
}
else
{
    for(int i = 0; i < factorial - 1 ; i++){
        a = factorial - 1 - i;
        b = b*a;
    }
 std::cout << b << std::endl;
}


}
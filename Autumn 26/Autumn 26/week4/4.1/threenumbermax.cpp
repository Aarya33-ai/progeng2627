#include <iostream>

double comparemax(double n1, double n2, double n3){

double largest = n1;

if (n2 > largest){
    largest = n2;
}
if (n3 > largest){
    largest = n3;
}

return largest;

}
int main(){
    ;
    double input1, input2, input3;
std::cout << "What is your first number?" << std::endl;
std::cin >> input1;

std::cout << "What is your second number?" << std::endl;
std::cin >> input2; 

std::cout << "What is your third number?" << std::endl;
std::cin >> input3;

double answer = comparemax(input1, input2, input3);

std::cout << answer << std::endl;
}

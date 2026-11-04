#include <iostream>

double compare(double n1, double n2 ){

    double result;

    if(n1 > n2){
        return result = n1;
    }

    else{
     return result = n2;  
    }

}
int main(){
    ;
    double input1, input2;
std::cout << "What is your first number?" << std::endl;
std::cin >> input1;

std::cout << "What is your second number?" << std::endl;
std::cin >> input2; 

double answer = compare(input1, input2);

std::cout << answer << std::endl;
}









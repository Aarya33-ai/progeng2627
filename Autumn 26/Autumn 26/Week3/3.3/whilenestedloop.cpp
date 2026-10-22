#include <iostream>

int main(){
    int n, counter, c2;
    
    c2 = 0;
    std::cin >> n;
    counter = 0;
while (c2 < n){
counter = 0;
    while(counter < n){

        std::cout << "*";

        counter++;
    }
 std::cout << std::endl;   
 c2++;  
}
}
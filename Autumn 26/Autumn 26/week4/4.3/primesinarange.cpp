#include <iostream>
bool smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...
            return false;
        }

    }
    return true;
}



int main(){ 

    int n1, n2;
    std::cout<<"What are your 2 numbers?"<<std::endl;
    std::cin >> n1 >> n2;
   
    for (int x = n1; x <= n2; x++){
        if (smallest_factor(x) == true)
        std::cout << x << std::endl;
    }
}
    


#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...
            return cf;
        }

    }
    return 0;
}
int main(){
    int n;
std::cin>>n;

std::cout<<smallest_factor(n);
}
#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){

   if (vin.size() != 0){
    int a;
    for(int i = 0; i < vin.size(); i++ ){
        if(n == vin[i] ){
            return a = i; 
        }
    }   
}
else {
    int a;
    return a = -1;
}
}




int main(){
    std::vector<int> empty;
    std::vector<int> a{3, 5, 1};
    std::vector<int> b{7};
    std::vector<int> d{-1, -5, 0};
    std::vector<int> e{2, 2, 2};
    std::vector<int> f{4, 2, 2, 9};

    std::cout << (search_vector(4, empty) == -1) << std::endl;   // empty vector
    std::cout << (search_vector(3, a) == 0) << std::endl;        // found at the start
    std::cout << (search_vector(5, a) == 1) << std::endl;        // found in the middle
    std::cout << (search_vector(1, a) == 2) << std::endl;        // found at the end
    std::cout << (search_vector(9, a) == -1) << std::endl;       // not found
    std::cout << (search_vector(7, b) == 0) << std::endl;        // one element, found
    std::cout << (search_vector(8, b) == -1) << std::endl;       // one element, not found
    std::cout << (search_vector(-5, d) == 1) << std::endl;       // negative value
    std::cout << (search_vector(2, e) == 0) << std::endl;        // all equal: first occurrence
    std::cout << (search_vector(2, f) == 1) << std::endl;        // duplicate: first occurrence
    std::cout << (search_vector(9, f) == 3) << std::endl;        // found at the end again
}
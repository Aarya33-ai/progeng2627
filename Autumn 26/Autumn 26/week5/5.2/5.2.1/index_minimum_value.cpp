#include <iostream>
#include <vector>

int min_vector_element(const std::vector<int>& vin){



if (vin.size() != 0){
    int a, minimum  = vin[0];
for(int i = 0; i < vin.size(); i++ ){
         
    if(vin[i] <= minimum){
    a = i;
    }
    
}
return a;
}
else{
return -1;
}
}

int main(){
    std::vector<int> empty;
    std::vector<int> a{3, 5, 1};
    std::vector<int> b{7};
    std::vector<int> c{1, 5, 3};
    std::vector<int> d{-1, -5, 0};
    std::vector<int> e{2, 2, 2};
    std::vector<int> f{4, 2, 2, 9};

    std::cout << (min_vector_element(empty) == -1) << std::endl;   // empty vector
    std::cout << (min_vector_element(a) == 2) << std::endl;        // smallest is last
    std::cout << (min_vector_element(b) == 0) << std::endl;        // one element
    std::cout << (min_vector_element(c) == 0) << std::endl;        // smallest is first
    std::cout << (min_vector_element(d) == 1) << std::endl;        // negatives
    std::cout << (min_vector_element(e) == 0) << std::endl;        // all equal: first index
    std::cout << (min_vector_element(f) == 1) << std::endl;        // tie: first of the two 2s
}
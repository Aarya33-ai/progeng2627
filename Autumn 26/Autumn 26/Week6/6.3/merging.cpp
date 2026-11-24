#include <iostream>
#include <vector>



void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){

    int i = 0, a = 0;
    while (a < v1.size() && i < v2.size()) {

        if(v1[a] < v2[i]){
            merged.push_back(v1[a]);
            a++;
        }
        else{
            merged.push_back(v2[i]); 
            i++;
        }
    }
    if (a == v1.size()){
        for(i; i < v2.size(); i++)
        merged.push_back(v2[i]);

    }
      if (i == v2.size()){
        for(a; a < v1.size(); a++)
        merged.push_back(v1[a]);

    }
}



int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);
    
    for(int z = 0; z < out.size(); z++){
        std::cout << out[z] << std::endl;
    }

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    
    std::vector<int> a1 = {1, 3, 5, 6}, b1 = {4, 6, 10}, out1;
    std::vector<int> exp1 = {1, 3, 4, 5, 6, 6, 10};
    merge_vectors_int(a1, b1, out1);
    std::cout << (out1 == exp1) << std::endl;


    std::vector<int> a2 = {1, 2}, b2 = {3, 4}, out2;
    std::vector<int> exp2 = {1, 2, 3, 4};
    merge_vectors_int(a2, b2, out2);
    std::cout << (out2 == exp2) << std::endl;

  
    std::vector<int> a3 = {3, 4}, b3 = {1, 2}, out3;
    std::vector<int> exp3 = {1, 2, 3, 4};
    merge_vectors_int(a3, b3, out3);
    std::cout << (out3 == exp3) << std::endl;

   
    std::vector<int> a4, b4 = {1, 2}, out4;
    std::vector<int> exp4 = {1, 2};
    merge_vectors_int(a4, b4, out4);
    std::cout << (out4 == exp4) << std::endl;

   
    std::vector<int> a5 = {1, 2}, b5, out5;
    std::vector<int> exp5 = {1, 2};
    merge_vectors_int(a5, b5, out5);
    std::cout << (out5 == exp5) << std::endl;

    
    std::vector<int> a6, b6, out6;
    std::vector<int> exp6;
    merge_vectors_int(a6, b6, out6);
    std::cout << (out6 == exp6) << std::endl;


    std::vector<int> a7 = {1}, b7 = {5, 6, 7, 8, 9, 10}, out7;
    std::vector<int> exp7 = {1, 5, 6, 7, 8, 9, 10};
    merge_vectors_int(a7, b7, out7);
    std::cout << (out7 == exp7) << std::endl;

    
    std::vector<int> a8 = {1, 3, 5}, b8 = {2, 4, 6}, out8;
    std::vector<int> exp8 = {1, 2, 3, 4, 5, 6};
    merge_vectors_int(a8, b8, out8);
    std::cout << (out8 == exp8) << std::endl;
}
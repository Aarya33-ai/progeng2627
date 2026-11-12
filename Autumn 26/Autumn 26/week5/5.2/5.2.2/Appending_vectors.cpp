#include <iostream>
#include <vector>



void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

if (vin1.size() != 0){
    for(int i = 0; i < vin1.size(); i++){

    int a = 0;

    a = vin1[i];
    vout.push_back(a);

    }
}


if (vin2.size() != 0){
for(int i = 0; i < vin2.size(); i++){

int a = 0;

a = vin2[i];
vout.push_back(a);

}
}
}



int main(){

std::vector<int> v1 = {1, 2, 3} , v2 = {4, 5,}, v3 = {0, -21}, v4 = {}, vout1, vout2, vout3;

append_vectors(v1, v2, vout1);
std::vector<int> expected1 = {1, 2, 3, 4, 5};

std::cout<<(vout1 == expected1) << std::endl;


append_vectors(v3, v4, vout2);
std::vector<int> expected2 = {0, -21};
std::cout<<(vout2 == expected2)<<std::endl;


append_vectors(v4, v4, vout3);
std::vector<int> expected3 = {};
std::cout<<(vout3 == expected3)<<std::endl;




}

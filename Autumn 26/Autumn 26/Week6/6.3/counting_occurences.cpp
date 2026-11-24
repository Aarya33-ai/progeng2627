#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

int counter(std::string target, const std::vector<std::string>& v){

    int a = 0;
    for(int i = 0; i < v.size(); i++){

        if(v[i] == target){
            a++;
        }
    }
    return a;
}


int main(){
    std::ifstream infile;
    infile.open("text.txt");

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> v;
   
    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();


    std::ifstream infile1;
    infile1.open("words.txt");

    if(!infile1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> v1;
   
    std::string tmp1;

    while(infile1 >> tmp1){
        v1.push_back(tmp1);
    }

    infile1.close();
    
    std::ofstream outfile1;
    

    outfile1.open("occurences.txt");

    if(!outfile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int x = 0; x < v1.size(); x++){

        outfile1 << v1[x] << ": " << counter(v1[x], v) << std::endl;
    }
    outfile1.close();
}
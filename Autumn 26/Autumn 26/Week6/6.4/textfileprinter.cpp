#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "failure" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> lines;
    std::string line;
    while(infile >> line){
        lines.push_back(line);
    }

    for(int i = 0; i < lines.size(); i++){
        std::cout << lines[i] << std::endl;
    }

    infile.close();
}
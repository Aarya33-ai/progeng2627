#include <iostream> 
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){

        for(int i = 0; i < vin.size(); i++ ){
            if(s == vin[i] ){
            return 1; 
            } 
        } 
            return 0;
    }


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int x = 0; x < vin1.size(); x++){
        vout.push_back(vin1[x]);
    }

    int a = vin2.size();
    for(int i = 0; i < a; i++){

        if(search_vector(vin2[i], vin1) == 0){
            vout.push_back(vin2[i]);
        }
    } 
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    
    int a = vin1.size();
    for(int i = 0; i < a; i++){

        if(search_vector(vin1[i], vin2) == 1){
            vout.push_back(vin1[i]);

        }
    } 
}

int main(){

    std::vector<std::string> v1, v2, vunion, vintersect;

    std::ifstream infile1;
    
    std::string filename1;
    std::cout << "What is your file called?" << std::endl;
    std::cin >> filename1;

    infile1.open(filename1);

    if(!infile1.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
        std::string tmp1;

    while(infile1 >> tmp1){
        v1.push_back(tmp1); 
    }

    infile1.close();

    std::ifstream infile2;
    
    std::string filename2;
    std::cout << "What is your file called?" << std::endl;
    std::cin >> filename2;

     infile2.open(filename2);

    if(!infile2.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
            std::string tmp2;

    while(infile2 >> tmp2){
        v2.push_back(tmp2); 
    }

    infile2.close();

    union_vector(v1, v2, vunion);
    intersection_vector(v1, v2, vintersect);

    std::ofstream outfile1;
    

    outfile1.open("intersect.txt");
    
    if(!outfile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }


    for(int a = 0; a < vintersect.size(); a++){
        outfile1 << vintersect[a] << std::endl;
    }
    outfile1.close();

    std::ofstream outfile2;
    

    outfile2.open("union.txt");
    
    if(!outfile2.is_open()){
        return EXIT_FAILURE;
    }


    for(int a = 0; a < vunion.size(); a++){
        outfile2 << vunion[a] << std::endl;
    }
    outfile2.close();
}
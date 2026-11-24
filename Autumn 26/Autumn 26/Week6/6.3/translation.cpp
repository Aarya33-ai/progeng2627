#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

bool read_words(const std::string& filename, std::vector<std::string>& words){

std::ifstream firstfile;
firstfile.open(filename);

if(!firstfile.is_open()){ 
        return false;
    }

std::string tmp;

while(firstfile >> tmp){
    words.push_back(tmp);
    }
firstfile.close();

return true;
}

void translate(const std::vector<std::string>& words, const std::vector<std::string>& dictionary, std::vector<std::string>& final ){

    for(int i = 0; i < words.size(); i++){
        int a;
        for(a = 0; a < dictionary.size()-2; a++){
            if(words[i] == dictionary[a]){
                final.push_back(dictionary [a + 1]);
                a = 10;
            }
        }
         if (a == dictionary.size() - 2){
                final.push_back(words[i]);
        }
    }
}


bool create(const std::vector<std::string>& final){
    std::ofstream outfile1;
     outfile1.open("translation.txt");

     if(!outfile1.is_open()){ 
        return false;
    }

    for(int x = 0; x < final.size(); x++){
        outfile1 << final[x] << " ";
    }
    outfile1.close();
    return true;
}


int main(){
    std::string filename;
    std::cout << "What is the name of your ad file?" << std::endl;
    std::cin >> filename;

    std::vector<std::string> words1, words2, words3; 

    if(!read_words(filename, words1)){
       std::cout << "error opening file1" << std::endl;
        return EXIT_FAILURE;
    }

    if(!read_words("bedsittrans.txt", words2)){
    std::cout << "error opening file2" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << words1.size() << " " << words2.size() << std::endl;

    translate(words1, words2, words3);
     
   std::cout << words3.size() << std::endl;

    if(!create(words3)){
        std::cout << "error opening file3" << std::endl;
        return EXIT_FAILURE;
     }
}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    std::ofstream outfile;
    // outfile is not a special name

    outfile.open("output.txt");
    // this will associate outfile to a file called output.txt
    // if the file doesn't exist it is created
    // if the file already exists it will be overwritten!

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int a;
    a = v.size() - 1;

    for(a; a > -1; a--){
        outfile << v[a] << std::endl;

    }
    // prints on the output file

    outfile.close();

    // TODO: print the content of v in reversed order
    // onto a different text file

}
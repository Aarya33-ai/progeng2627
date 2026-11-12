#include <iostream>
#include <vector>

int main(){

std::vector<int> sequence, sequence2;

    int n = 0, a, s;
    std::cout << "how many numbers will you input?" << std::endl;
    std::cin >> n;

    for( int x = 0; x < n; x++){

            std::cin >> a;
                sequence.push_back(a); // we store the number in the vector

    }

    std::cout << "what is your value of s?" << std::endl;
    std::cin >> s;

        int g = 0;
     for(int i = sequence.size() - 1; i >= 0; i--){
       if(sequence[i] == s){
        sequence2.push_back(i);
    g++;
       }
     }
     std::cout << "Your number occurs " << g << " times in your sequence" << std::endl;

     for( int b = 0; b < sequence2.size(); b++){
     std::cout << sequence2[b] << std::endl;
     }
}
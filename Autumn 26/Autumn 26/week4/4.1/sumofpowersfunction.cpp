#include <iostream>

double mypow(double base, int exp){
    double result = base, i; 

    if (exp == 0){
        result = 1;
    }
    for(i = 0; i < exp - 1; i++){
        result = result * base;

    }

    return result;

}

double sumofpow(int x, int n){
int g;
double sumsofar = 0;

for (g = 1; g < n + 1; g++){
    sumsofar = mypow(x, g) + sumsofar;
}

return sumsofar;
}

int main(){

    // simple whole numbers
    std::cout << (sumofpow(2, 3) == 14) << std::endl;     // 2+4+8
    std::cout << (sumofpow(2, 2) == 6) << std::endl;      // 2+4
    std::cout << (sumofpow(3, 2) == 12) << std::endl;     // 3+9
    std::cout << (sumofpow(3, 4) == 120) << std::endl;    // 3+9+27+81
    std::cout << (sumofpow(4, 3) == 84) << std::endl;     // 4+16+64
    std::cout << (sumofpow(10, 3) == 1110) << std::endl;  // 10+100+1000
    std::cout << (sumofpow(2, 10) == 2046) << std::endl;  // 2+4+...+1024

    // smallest n
    std::cout << (sumofpow(2, 1) == 2) << std::endl;
    std::cout << (sumofpow(5, 1) == 5) << std::endl;

    // x = 1 and x = 0
    std::cout << (sumofpow(1, 5) == 5) << std::endl;      // 1+1+1+1+1
    std::cout << (sumofpow(0, 4) == 0) << std::endl;      // all terms 0

    // negative x (signs alternate)
    std::cout << (sumofpow(-1, 3) == -1) << std::endl;    // -1+1-1
    std::cout << (sumofpow(-1, 4) == 0) << std::endl;     // -1+1-1+1
    std::cout << (sumofpow(-2, 3) == -6) << std::endl;    // -2+4-8
    std::cout << (sumofpow(-3, 2) == 6) << std::endl;     // -3+9

    // n = 0 (empty sum): depends on your formula
    std::cout << (sumofpow(2, 0) == 0) << std::endl;      // use == 1 if the sum starts at power 0


}








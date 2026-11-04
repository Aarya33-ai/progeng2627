#include <iostream>

int myfactorial(int in){
// in is not a special name
// just a name

    int fact = in, a = 0, b = fact;
    // variable that will store the result

    if (fact == 0)
{
    return fact = 1;
}

else
{
    for(int i = 0; i < fact - 1 ; i++){

        a = fact - 1 - i;
        b = b*a;
    }
}
    // TODO: compute the factorial of in
    // so that the result is stored in variable fact


    return b;
    // return the result
    // we *do not print* anything in the function
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}
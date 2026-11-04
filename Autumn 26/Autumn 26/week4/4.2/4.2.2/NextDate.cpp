#include <iostream>

bool leap_year(int year){
    bool ly;
if ((year%400 == 0) || ((year%4 == 0) && !(year%100 == 0))){
    ly = true;}
else{
ly = false;
}
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    if((leap_year(y1)) && (m1 == 2)){
        if (d1 == 29){
            m2 = 3;
            d2 = 1;
            y2 = y1;
        }
        else {
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
    }
    else{
       if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
        if (d1 == 30){
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }
        else {
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
    }
    if (m1 == 2) {
        if (d1 == 28){
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }
        else {
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
    }
    else{
        if ((d1 == 31) && (m1 == 12)){
            d2 = 1;
            m2 = 1;
            y2 = y1 + 1;
             if ((d1 == 31) && !(m1 == 12)){
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }
        }
       
        else {
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
    }

       }  // 30-day months
    }
}

// calls next_date and checks all three outputs against the expected date
// returns true (prints 1) if they all match
bool test_next_date(int d1, int m1, int y1, int exp_d, int exp_m, int exp_y){
    int d2, m2, y2;
    next_date(d1, m1, y1, d2, m2, y2);
    return (d2 == exp_d) && (m2 == exp_m) && (y2 == exp_y);
}

int main(){
    // ordinary days
    std::cout << test_next_date(15, 6, 2023, 16, 6, 2023) << std::endl;
    std::cout << test_next_date(1, 1, 2023, 2, 1, 2023) << std::endl;

    // end of 31-day and 30-day months
    std::cout << test_next_date(31, 1, 2023, 1, 2, 2023) << std::endl;
    std::cout << test_next_date(31, 3, 2023, 1, 4, 2023) << std::endl;
    std::cout << test_next_date(30, 4, 2023, 1, 5, 2023) << std::endl;
    std::cout << test_next_date(30, 11, 2023, 1, 12, 2023) << std::endl;

    // February, non-leap and leap
    std::cout << test_next_date(28, 2, 2023, 1, 3, 2023) << std::endl;
    std::cout << test_next_date(28, 2, 2024, 29, 2, 2024) << std::endl;
    std::cout << test_next_date(29, 2, 2024, 1, 3, 2024) << std::endl;
    std::cout << test_next_date(28, 2, 1900, 1, 3, 1900) << std::endl;
    std::cout << test_next_date(28, 2, 2000, 29, 2, 2000) << std::endl;
    std::cout << test_next_date(29, 2, 2000, 1, 3, 2000) << std::endl;

    // end of year
    std::cout << test_next_date(31, 12, 2023, 1, 1, 2024) << std::endl;
    std::cout << test_next_date(31, 12, 1999, 1, 1, 2000) << std::endl;
}
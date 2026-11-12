#include <iostream>
#include <vector>

void filter_v(const std::vector<double> &vin, double t, std::vector<double> &vout)
{

    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] < t)
        {
            vout.push_back(vin[i]);
        }
    }
}

int main()
{

    std::vector<double> v1 = {0, 1, 2, 3, 4, 5, 6}, v2 = {7, 10, -5.6, 8.9, 22, 11}, v3 = {}, vout1, vout2, vout3;

    double t1 = 4.3, t2 = 10.3, t3 = 0;

    filter_v(v1, t1, vout1);
    std::vector<double> expected1 = {0, 1, 2, 3, 4};
    std::cout << (expected1 == vout1) << std::endl;

    filter_v(v2, t2, vout2);
    std::vector<double> expected2 = {7, 10, -5.6, 8.9};
    std::cout << (expected2 == vout2) << std::endl;

    filter_v(v3, t3, vout3);
    std::vector<double> expected3 = {};
    std::cout << (expected3 == vout3) << std::endl;
}
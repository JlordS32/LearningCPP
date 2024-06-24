#include <iostream>
#include <cmath>

int main() {

    double x = 33.3;
    double y = 4;


    double min = std::min(x, y);
    double max = std::max(x, y);

    std::cout << min << std::endl;
    std::cout << max << std::endl;

    // Using pow()

    double powered = pow(2, 3);
    double square = sqrt(9);

    std::cout << powered << std::endl;
    std::cout << square << std::endl;
    

    return 0;
}
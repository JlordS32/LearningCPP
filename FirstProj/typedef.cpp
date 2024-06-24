#include <iostream>
#include <vector>

// Method 1
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

// Method 2
using text_t = std::string;
using number_t = int;

int main() {
    text_t text = "Hello, World!";
    number_t number = 10;

    std::cout << number << std::endl;

    return 0;
}
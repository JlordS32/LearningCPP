#include <iostream>

template <typename T, typename U>
auto max(T x, U y) {
    return x > y ? x : y;
}

int main() {
    auto maxValue = max(2, 2.1); // Automatically deduces the type

    std::cout << maxValue << std::endl;

    return 0;
}

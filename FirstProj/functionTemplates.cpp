#include <iostream>
#include <typeinfo>

template <typename T, typename U>
auto max(T x, U y) {
    return x > y ? x : y;
}

int main() {
    auto maxValue = max(2, 23);

    std::cout << maxValue << std::endl;
    std::cout << typeid(maxValue).name() << std::endl;

    return 0;
}

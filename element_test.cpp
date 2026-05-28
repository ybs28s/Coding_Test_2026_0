#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v ({1,3,5,7,2,4,6});

    auto maxIt = std::max_element(v.begin(), v.end());
    auto minIt = std::min_element(v.begin(), v.end());

    std::cout << *maxIt << "\n";
    std::cout << *minIt << "\n";

    return 0;
}
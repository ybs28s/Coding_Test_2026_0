#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    std::vector<int> v ({1,5,7,4,5});

    std::cout << std::binary_search(v.begin(), v.end(), 5) << "\n";
    std::cout << std::binary_search(v.begin(), v.end(), 7) << "\n";

    return 0;
}
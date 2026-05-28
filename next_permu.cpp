#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v ({1,2,3});
    do {
        for (int i : v) {
            std::cout << i << " ";
        } std::cout << "\n";
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}
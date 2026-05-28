#include <iostream>
#include <vector>

double get_avg(const std::vector<int>& arr, int N) {
    if (arr.empty()) {
        return -1;
    }
    if (N==0) {
        return -1;
    }

    int sum (0);
    for (int num : arr) {
        sum += num;
    }

    return sum/N;
}

int main() {
    std::vector<int> v ({10, 30, 50, 60, 34, 64, 77});
    int N = v.size();
    std::cout << get_avg(v, N) << "\n";

    std::vector<int> v1 ({});
    int N1 = v1.size();
    std::cout << get_avg(v1, N1) << "\n";

    return 0;
}
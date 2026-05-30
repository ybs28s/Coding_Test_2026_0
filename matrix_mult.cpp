#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> matrix_mult(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = B[0].size();
    int inner = A[0].size();
    std::cout << "A.size() : " << A.size() << std::endl;
    std::cout << "B[0].size() : " << B[0].size() << std::endl;

    std::vector<std::vector<int>> C(rows, std::vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < inner; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int main() {
    std::vector<std::vector<int>> A = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<std::vector<int>> B = {{5, 6}, {7, 8}};

    std::vector<std::vector<int>> C = matrix_mult(A, B);
    
    for (const auto& row : C) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;  
}
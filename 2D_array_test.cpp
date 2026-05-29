#include <iostream>
#include <vector>

int main() {
    int arr[3][4] ({{1,2,3,4},{5,6,7,8},{9,10,11,12}});
    std::cout << arr[2][3] << "\n";
    arr[2][3] = 15;
    std::cout << arr[2][3] << "\n";

    for(int i=0; i<3 ; ++i) {
        for(int j=0; j<4 ; ++j) {
            std::cout << arr[i][j] << " ";
        }
    }
    std::cout << "\n";
    return 0;    
}
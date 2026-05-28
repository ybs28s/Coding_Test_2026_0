#include <iostream>

double total_price(int quantity, double price) {
    double total (quantity * price);
    if(total > 100) {
        return total * 0.9;
    }
    return total;
}

int main() {
    std::cout << total_price(4, 50) << "\n";
    return 0;
}
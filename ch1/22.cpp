#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book, total;

    std::cin >> total;

    while(std::cin >> book) {
        total += book;
    }
    std::cout << total << std::endl;
    return 0;
}
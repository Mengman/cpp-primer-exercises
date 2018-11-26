#include <iostream>

int main() {
    int i = 0, j = 0;
    std::cout << "Please Enter two numbers " << std::endl;
    std::cin >> i >> j;
    if (i > j) {
        int tmp = j;
        j = i;
        i = tmp;
    }

    while (i <= j) {
        std::cout << i++ << std::endl;
    }
    return 0;
}
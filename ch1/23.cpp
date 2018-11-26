#include <map>
#include <iostream>
#include <iterator>
#include "Sales_item.h"

int main() {
    std::map<std::string, Sales_item> m;
    Sales_item book;

    while(std::cin >> book) {
        if(m.find(book.isbn()) != m.end()) {
            m[book.isbn()] += book;
        } else {
            m[book.isbn()] = book;
        }
    }
    std::map<std::string, Sales_item>::iterator it = m.begin();
    while(it != m.end()) {
        std::cout << it->second << std::endl;
        it++;
    }
    return 0;
}
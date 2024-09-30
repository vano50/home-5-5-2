﻿#include <iostream>
#include <vector>
#include <set>
#include <list>

template<typename ContType>
void print_container(const ContType& cont) {
    for (auto z = cont.begin(); z != cont.end(); ++z) {
        std::cout << *z << " ";
    }
    std::cout << std::endl;
}

int main() {
    
    std::set<std::string> test_set = { "one", "two", "three", "four" }; // set сортирует в алфавитном порядке
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };

    print_container(test_set);
    print_container(test_list);
    print_container(test_vector);

    return 0;
}

#include <vector>
#include <iostream>


void part1() {
    //TODO: Implement part 1
    std::vector<int> v = {};
    for (int i = 0; i < 50000; ++i) {
        v.push_back(i);
    }
    std::cout << "After adding elements: Size = " << v.size() << ", Capacity: " << v.capacity() << std::endl;

    v.resize(v.size()/2);
    std::cout << "After resizing: Size = " << v.size() << ", Capacity: " << v.capacity() << std::endl;

    v.shrink_to_fit();
    std::cout << "After shrink_to_fit(): Size = " << v.size() << ", Capacity: " << v.capacity() << std::endl;
}

void part2() {
    //TODO: Implement part 2
    std::vector<bool> v1(10000, true);
    std::cout << "Memory usage of std::vector<bool>: " << v1.capacity() / 8 << " bytes" << std::endl;

    std::vector<char> v2(10000);
    std::cout << "Memory usage of std::vector<char>: " << v2.size() << " bytes" << std::endl;

}

int main() {
    part1();
    part2();
    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        if (seen.count(num) > 0) {
            return true;
        }
        seen.insert(num);
    }

    return false;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 1};
    bool hasDuplicate = containsDuplicate(numbers);

    if (hasDuplicate) {
        std::cout << "The vector contains duplicate elements." << std::endl;
    } else {
        std::cout << "The vector does not contain duplicate elements." << std::endl;
    }

    return 0;
}

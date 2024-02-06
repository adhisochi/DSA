#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int uniqueIndex = 0;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[uniqueIndex]) {
            ++uniqueIndex;
            nums[uniqueIndex] = nums[i];
        }
    }

    return uniqueIndex + 1;
}

int main() {
    std::vector<int> numbers = {1, 1, 2, 2, 3, 4, 4, 5};

    int uniqueCount = removeDuplicates(numbers);

    std::cout << "Unique elements count: " << uniqueCount << std::endl;
    std::cout << "Modified vector: ";
    for (int i = 0; i < uniqueCount; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;

    std::reverse(nums.begin(), nums.end());

    std::reverse(nums.begin(), nums.begin() + k);

    std::reverse(nums.begin() + k, nums.end());
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int k = 2;

    rotate(numbers, k);

    std::cout << "Rotated vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

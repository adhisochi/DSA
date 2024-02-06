#include <iostream>
#include <vector>

using namespace std;
int singleNumber(std::vector<int>& nums) {
    int result = 0;

    for (int num : nums) {
        result ^= num; // XOR operation, cancels out duplicates
    }

    return result;
}

int main(){
    vector <int> nums = {1,2,2,3,3,4,4,5,5,6,6};
    int result = singleNumber(nums);
    cout << result << " is single";
    return 0;
}

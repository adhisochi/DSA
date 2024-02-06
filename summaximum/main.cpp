#include <iostream>
//sum of elements in an array
int summation(const int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}
// maximum element in an array
int maximum(const int array[], int n) {
    if (n == 0) {
        std::cerr << "Error: Array is empty." << std::endl;

        return -1;
    }

    int max = array[0];
    for (int i = 1; i < n; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int n;

    //  length of the array from the user
    std::cout << "Enter the length of the array (n): ";
    std::cin >> n;

    // Declare an array of length n
    int array[n];

    // Allow the user to enter n integers and store them in the array
    std::cout << "Enter " << n << " integers, separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    // Call the summation function and display the result
    int sum = summation(array, n);
    std::cout << "Sum of the array elements: " << sum << std::endl;

    // Call the maximum function and display the result
    int max = maximum(array, n);
    if (max != -1) {
        std::cout << "Maximum value in the array: " << max << std::endl;
    }

    return 0;
}

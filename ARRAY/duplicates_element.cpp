#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicates(const std::vector<int>& arr) {
    std::unordered_set<int> seen;
    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            return true; // Duplicate found
        }
        seen.insert(num);
    }
    return false; // No duplicates
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 1}; // Example array
    if (containsDuplicates(arr)) {
        std::cout << "The array contains duplicates." << std::endl;
    } else {
        std::cout << "The array does not contain duplicates." << std::endl;
    }
    return 0;
}

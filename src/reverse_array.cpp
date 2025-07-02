//reverse an array in place
#include <iostream>
#include <vector>
#include <algorithm>

int main() { 
    //initialize an empty array
    std::vector<int> arr;

    //fill the array with a random set of numbers
    arr = {3, 5, 7, 2, 100, 10, 1, 4, 6, 9};
    //check length of array
    int len = arr.size();
    if (len == 0) {
        std::cout << "Array is empty." << std::endl;
        return 0;
    }else{
        //reverse the array in place
        for (int i = 0; i < len / 2; ++i) {
            std::swap(arr[i], arr[len - i - 1]);
        }
        //print the reversed array
        std::cout << "reversed array: ";
        for (const auto& num : arr) {
            std::cout << num << " ";
        }
    }
}
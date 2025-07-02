//Find the largest number in an array that is unsorted

#include <iostream>
#include <vector>
#include <algorithm>

int main() { 
    //initialize an empty array
    std::vector<int> arr;

    //fill the array with a random set of numbers
    arr = {3, 5, 7, 2, 100, 10, 1, 4, 6, 9};
    auto max_it = std::max_element(arr.begin(), arr.end());
    int res = (max_it != arr.end()) ? *max_it : 0; // return the largest number, ternary operator handles empty array case
    std::cout << "The largest number in the array is: " << res << std::endl;
}

//check if a number if a prime number 
#include <iostream>
#include <cmath>

int main(){
    //use the approach to achieve o(sqrt(n)) time complexity
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n < 2) {
        std::cout << n << " is not a prime number." << std::endl;
        return 0;
    }

    std::cout << sqrt(n) << std::endl;

    for (int i = 2; i <= std::sqrt(n); ++i){
        if (n % i == 0){
            std::cout << n << " is not a prime number." << std::endl;
            return 0;
        }
    }
    std::cout << n << " is a prime number." << std::endl;
    return 1;
}
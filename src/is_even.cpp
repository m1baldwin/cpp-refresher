//takes integer as input and checks if even or odd 
#include <iostream>

int main(){
    long number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl; 
    }
}

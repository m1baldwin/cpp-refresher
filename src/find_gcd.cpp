//find gcd of two integers
#include <iostream>

int main(){
    std::cout << "Enter two integers separated by a space: ";
    int a, b;
    std::cin >> a >> b;

    // Find GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    std::cout << "GCD: " << a << std::endl;
    return 0;
}

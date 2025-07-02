#include <iostream>
#include <string>

//ask user for name and age, then print greeting message


int main() {
    std::string name;
    std::string age_str;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    //std::getline(std::cin, age_str);
    //age = std::stoi(age_str);
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
    return 0;
}
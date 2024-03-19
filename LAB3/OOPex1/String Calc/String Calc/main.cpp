#include <iostream>
#include "Math.h"

int main() {
    std::cout << "Add(3, 5): " << Math::Add(3, 5) << std::endl;
    std::cout << "Add(3, 5, 7): " << Math::Add(3, 5, 7) << std::endl;
    std::cout << "Add(3.5, 5.7): " << Math::Add(3.5, 5.7) << std::endl;
    std::cout << "Add(3.5, 5.7, 7.9): " << Math::Add(3.5, 5.7, 7.9) << std::endl;
    std::cout << "Mul(3, 5): " << Math::Mul(3, 5) << std::endl;
    std::cout << "Mul(3, 5, 7): " << Math::Mul(3, 5, 7) << std::endl;
    std::cout << "Mul(3.5, 5.7): " << Math::Mul(3.5, 5.7) << std::endl;
    std::cout << "Mul(3.5, 5.7, 7.9): " << Math::Mul(3.5, 5.7, 7.9) << std::endl;
    std::cout << "Add(5, 10, 15, 20): " << Math::Add(4, 5, 10, 15, 20) << std::endl;
    char* result = Math::Add("OOP Lab is " , "nice");
    if (result != nullptr) {
        std::cout << "Add(\"OOP Lab is \", \"nice\"): " << result << std::endl;
        delete[] result; }
    else {
        std::cout << "Add(\"Hello \", \"world!\"): One of the strings is nullptr." << std::endl;
    }

    return 0;
}

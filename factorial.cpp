#include <iostream>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
    } else {
        int result = factorial(n);
        std::cout << "Factorial of " << n << " is: " << result << std::endl;
    }

    return 0;
}

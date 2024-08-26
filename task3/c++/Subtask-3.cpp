#include <iostream>

void printDiamond(int n) {
    // Print the upper part of the diamond
    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << ' ';
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << '*';
        }
        // Move to the next line
        std::cout << std::endl;
    }
    
    // Print the lower part of the diamond
    for (int i = n - 2; i >= 0; --i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << ' ';
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << '*';
        }
        // Move to the next line
        std::cout << std::endl;
    }
}

int main() {
    int n;

    // Prompt the user for the number of rows
    std::cout << "Enter the number of rows for the diamond pattern: ";
    std::cin >> n;

    // Validate input
    if (n <= 0) {
        std::cerr << "Number of rows must be a positive integer." << std::endl;
        return 1;
    }

    // Print the diamond pattern
    printDiamond(n);

    return 0;
}

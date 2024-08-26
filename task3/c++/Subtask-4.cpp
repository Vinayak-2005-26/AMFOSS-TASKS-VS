#include <fstream>
#include <iostream>

void generateDiamond(int n, std::ofstream &outputFile) {
    // Print the upper part of the diamond
    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            outputFile << ' ';
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            outputFile << '*';
        }
        // Move to the next line
        outputFile << std::endl;
    }

    // Print the lower part of the diamond
    for (int i = n - 2; i >= 0; --i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            outputFile << ' ';
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            outputFile << '*';
        }
        // Move to the next line
        outputFile << std::endl;
    }
}

int main() {
    int n;
    std::ifstream inputFile("vsofficial.txt"); // Open input file
    std::ofstream outputFile("output.txt");    // Open output file

    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    // Read the number from the input file
    inputFile >> n;
    inputFile.close();

    // Validate input
    if (n <= 0) {
        std::cerr << "Number of rows must be a positive integer." << std::endl;
        return 1;
    }

    // Generate and write the diamond pattern to the output file
    generateDiamond(n, outputFile);

    outputFile.close();

    std::cout << "Diamond pattern written to output.txt" << std::endl;

    return 0;
}

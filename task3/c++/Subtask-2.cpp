#include <fstream>
#include <iostream>

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << line << std::endl;
    }

    if (inputFile.eof()) {
        std::cout << "End of file reached successfully." << std::endl;
    } else if (inputFile.fail()) {
        std::cerr << "Error reading from input file." << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Program completed successfully." << std::endl;
    return 0;
}

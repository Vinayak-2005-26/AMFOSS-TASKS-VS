#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char buffer[256];

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    } else {
        printf("Input file opened successfully.\n");
    }

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    } else {
        printf("Output file opened successfully.\n");
    }

    // Read the string from the input file
    if (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        fprintf(outputFile, "%s", buffer);
        printf("Content written to output file.\n");
    } else {
        perror("Error reading from input file");
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

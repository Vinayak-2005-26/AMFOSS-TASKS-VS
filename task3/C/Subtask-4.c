#include <stdio.h>

void printDiamond(int n, FILE *outputFile) {
    int i, j;

    // Top half of the diamond
    for (i = 0; i < n; i++) {
        // Print spaces
        for (j = 0; j < n - i - 1; j++)
            fprintf(outputFile, " ");
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++)
            fprintf(outputFile, "*");
        fprintf(outputFile, "\n");
    }

    // Bottom half of the diamond
    for (i = n - 2; i >= 0; i--) {
        // Print spaces
        for (j = 0; j < n - i - 1; j++)
            fprintf(outputFile, " ");
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++)
            fprintf(outputFile, "*");
        fprintf(outputFile, "\n");
    }
}

int main() {
    FILE *inputFile, *outputFile;
    int n;

    // Open the input file for reading
    inputFile = fopen("vsofficial.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Read the number from the input file
    if (fscanf(inputFile, "%d", &n) != 1) {
        perror("Error reading number from input file");
        fclose(inputFile);
        return 1;
    }
    fclose(inputFile);

    // Print debug message
    printf("Number read from file: %d\n", n);

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        return 1;
    } else {
        printf("Output file opened successfully.\n");
    }

    // Generate the diamond pattern and write to the output file
    printDiamond(n, outputFile);

    fclose(outputFile);

    return 0;
}

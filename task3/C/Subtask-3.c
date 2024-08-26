#include <stdio.h>

void printDiamond(int n) {
    int i, j;

    // Top half of the diamond
    for (i = 0; i < n; i++) {
        // Print spaces
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    // Bottom half of the diamond
    for (i = n - 2; i >= 0; i--) {
        // Print spaces
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;

    // Prompt user for input
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    // Print the diamond pattern
    printDiamond(n);

    return 0;
}

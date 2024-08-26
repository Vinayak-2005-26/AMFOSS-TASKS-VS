import java.util.Scanner;

public class Subtask3 {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the user
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the number of rows
        System.out.print("Enter the number of rows for the diamond pattern: ");
        int n = scanner.nextInt();
        scanner.close();

        // Generate and print the diamond pattern
        printDiamond(n);
    }

    public static void printDiamond(int n) {
        // Print the top half of the diamond
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print(" ");
            }
            // Print asterisks
            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            // Move to the next line
            System.out.println();
        }

        // Print the bottom half of the diamond
        for (int i = n - 2; i >= 0; i--) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print(" ");
            }
            // Print asterisks
            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            // Move to the next line
            System.out.println();
        }
    }
}

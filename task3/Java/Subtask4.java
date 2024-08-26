import java.io.*;

public class Subtask4 {
    public static void main(String[] args) {
        String inputFileName = "vsofficial.txt";
        String outputFileName = "output.txt";
        int n;

        // Read the number from vsofficial.txt
        try (BufferedReader reader = new BufferedReader(new FileReader(inputFileName))) {
            String line = reader.readLine();
            if (line != null) {
                n = Integer.parseInt(line.trim());
                System.out.println("Read number: " + n);
            } else {
                System.out.println("No number found in " + inputFileName);
                return;
            }
        } catch (IOException e) {
            System.out.println("Error reading from " + inputFileName + ": " + e.getMessage());
            return;
        }

        // Generate the diamond pattern and write to output.txt
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(outputFileName))) {
            String diamond = generateDiamond(n);
            writer.write(diamond);
            System.out.println("Diamond pattern written to " + outputFileName);
        } catch (IOException e) {
            System.out.println("Error writing to " + outputFileName + ": " + e.getMessage());
        }
    }

    public static String generateDiamond(int n) {
        StringBuilder sb = new StringBuilder();

        // Print the top half of the diamond
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                sb.append(" ");
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                sb.append("*");
            }
            sb.append("\n");
        }

        // Print the bottom half of the diamond
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n - i - 1; j++) {
                sb.append(" ");
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                sb.append("*");
            }
            sb.append("\n");
        }

        return sb.toString();
    }
}

import java.io.*;

public class Subtask2 {
    public static void main(String[] args) {
        // Initialize the file names
        String inputFileName = "input.txt";
        String outputFileName = "output.txt";

        // Use try-with-resources to ensure the files are closed after operations
        try (BufferedReader reader = new BufferedReader(new FileReader(inputFileName));
             BufferedWriter writer = new BufferedWriter(new FileWriter(outputFileName))) {

            // Read the string from the input file
            String line = reader.readLine();

            // Write the string to the output file
            writer.write(line);

            System.out.println("String read from " + inputFileName + " and written to " + outputFileName);

        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// Open the input file for reading
	inputFile, err := os.Open("input.txt")
	if err != nil {
		fmt.Println("Error opening input file:", err)
		return
	}
	defer inputFile.Close()

	// Open the output file for writing
	outputFile, err := os.Create("output.txt")
	if err != nil {
		fmt.Println("Error creating output file:", err)
		return
	}
	defer outputFile.Close()

	// Read from the input file
	scanner := bufio.NewScanner(inputFile)
	for scanner.Scan() {
		line := scanner.Text()
		// Write to the output file
		_, err := outputFile.WriteString(line + "\n")
		if err != nil {
			fmt.Println("Error writing to output file:", err)
			return
		}
	}

	if err := scanner.Err(); err != nil {
		fmt.Println("Error reading from input file:", err)
	}
}

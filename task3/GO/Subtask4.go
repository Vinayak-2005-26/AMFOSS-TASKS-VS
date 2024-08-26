package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	// Open the input file for reading
	inputFile, err := os.Open("vsofficial.txt")
	if err != nil {
		fmt.Println("Error opening input file:", err)
		return
	}
	defer inputFile.Close()

	// Read the number from the input file
	scanner := bufio.NewScanner(inputFile)
	if !scanner.Scan() {
		fmt.Println("Error reading number from input file")
		return
	}
	n, err := strconv.Atoi(scanner.Text())
	if err != nil {
		fmt.Println("Error converting input to integer:", err)
		return
	}

	// Open the output file for writing
	outputFile, err := os.Create("output.txt")
	if err != nil {
		fmt.Println("Error creating output file:", err)
		return
	}
	defer outputFile.Close()

	// Generate the diamond pattern and write to the output file
	printDiamond(n, outputFile)
}

// Function to print the diamond pattern
func printDiamond(n int, file *os.File) {
	// Upper part of the diamond
	for i := 0; i < n; i++ {
		for j := 0; j < n-i-1; j++ {
			file.WriteString(" ")
		}
		for j := 0; j < 2*i+1; j++ {
			file.WriteString("*")
		}
		file.WriteString("\n")
	}

	// Lower part of the diamond
	for i := n - 2; i >= 0; i-- {
		for j := 0; j < n-i-1; j++ {
			file.WriteString(" ")
		}
		for j := 0; j < 2*i+1; j++ {
			file.WriteString("*")
		}
		file.WriteString("\n")
	}
}

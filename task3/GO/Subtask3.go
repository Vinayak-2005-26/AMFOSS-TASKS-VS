package main

import (
	"fmt"
)

func main() {
	var n int

	// Read a number from the user
	fmt.Print("Enter a number: ")
	_, err := fmt.Scan(&n)
	if err != nil {
		fmt.Println("Invalid input:", err)
		return
	}

	// Generate and print the diamond pattern
	printDiamond(n)
}

// Function to print the diamond pattern
func printDiamond(n int) {
	// Upper part of the diamond
	for i := 0; i < n; i++ {
		for j := 0; j < n-i-1; j++ {
			fmt.Print(" ")
		}
		for j := 0; j < 2*i+1; j++ {
			fmt.Print("*")
		}
		fmt.Println()
	}

	// Lower part of the diamond
	for i := n - 2; i >= 0; i-- {
		for j := 0; j < n-i-1; j++ {
			fmt.Print(" ")
		}
		for j := 0; j < 2*i+1; j++ {
			fmt.Print("*")
		}
		fmt.Println()
	}
}

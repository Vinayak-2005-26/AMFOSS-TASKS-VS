use std::io;

fn main() {
    // Prompt the user for input
    println!("Enter the number of rows for the diamond pattern:");

    // Create a string to store the user input
    let mut input = String::new();

    // Read the user input
    io::stdin().read_line(&mut input).expect("Failed to read line");

    // Parse the input string into an integer
    let n: usize = input.trim().parse().expect("Please enter a valid number");

    // Generate the top half of the diamond (including the middle row)
    for i in 0..n {
        // Print leading spaces
        for _ in 0..(n - i - 1) {
            print!(" ");
        }
        // Print asterisks
        for _ in 0..(2 * i + 1) {
            print!("*");
        }
        // Move to the next line
        println!();
    } // Closing brace for the first for loop

    // Generate the bottom half of the diamond
    for i in (0..(n - 1)).rev() {
        // Print leading spaces
        for _ in 0..(n - i - 1) {
            print!(" ");
        }
        // Print asterisks
        for _ in 0..(2 * i + 1) {
            print!("*");
        }
        // Move to the next line
        println!();
    } // Closing brace for the second for loop
} // Closing brace for the main function

use std::fs::File;
use std::io::{self, Read, Write};

fn main() -> io::Result<()> {
    // Open the input file vsofficial.txt
    let mut input_file = File::open("vsofficial.txt")?;
    
    // Create a buffer to store the number
    let mut content = String::new();
    
    // Read the content of the input file
    input_file.read_to_string(&mut content)?;
    
    // Parse the content into an integer
    let n: usize = content.trim().parse().expect("Please enter a valid number in vsofficial.txt");
    
    // Open (or create) the output file output.txt
    let mut output_file = File::create("output.txt")?;
    
    // Generate the top half of the diamond (including the middle row)
    for i in 0..n {
        // Write leading spaces to the file
        for _ in 0..(n - i - 1) {
            write!(output_file, " ")?;
        }
        // Write asterisks to the file
        for _ in 0..(2 * i + 1) {
            write!(output_file, "*")?;
        }
        // Move to the next line in the file
        writeln!(output_file)?;
    }
    
    // Generate the bottom half of the diamond
    for i in (0..(n - 1)).rev() {
        // Write leading spaces to the file
        for _ in 0..(n - i - 1) {
            write!(output_file, " ")?;
        }
        // Write asterisks to the file
        for _ in 0..(2 * i + 1) {
            write!(output_file, "*")?;
        }
        // Move to the next line in the file
        writeln!(output_file)?;
    }
    
    println!("Diamond pattern generated in output.txt");
    
    Ok(())
}

use std::fs::File;
use std::io::{self, Read, Write};

fn main() -> io::Result<()> {
    // Open the input file
    let mut input_file = File::open("input.txt")?;

    // Create a buffer to store the file's content
    let mut content = String::new();

    // Read the content of the input file into the buffer
    input_file.read_to_string(&mut content)?;

    // Open (or create) the output file
    let mut output_file = File::create("output.txt")?;

    // Write the content to the output file
    output_file.write_all(content.as_bytes())?;

    println!("Content copied from input.txt to output.txt successfully!");

    Ok(())
}

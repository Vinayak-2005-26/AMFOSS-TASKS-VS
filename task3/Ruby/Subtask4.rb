def print_diamond(n)
  diamond = ""

  # Upper part of the diamond
  (0...n).each do |i|
    diamond += " " * (n - i - 1) + "*" * (2 * i + 1) + "\n"
  end

  # Lower part of the diamond
  (n - 2).downto(0) do |i|
    diamond += " " * (n - i - 1) + "*" * (2 * i + 1) + "\n"
  end

  diamond
end

begin
  # Open the input file and read the number
  input_file = 'vsofficial.txt'
  n = File.read(input_file).to_i

  # Generate the diamond pattern
  diamond = print_diamond(n)

  # Write the diamond pattern to the output file
  output_file = 'output.txt'
  File.write(output_file, diamond)

  puts "Diamond pattern successfully written to #{output_file}."
rescue => e
  # Handle any potential errors (e.g., file not found)
  puts "An error occurred: #{e.message}"
end

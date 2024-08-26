# Define file names
input_file = 'input.txt'
output_file = 'output.txt'

begin
  # Read the content from input.txt
  content = File.read(input_file)

  # Write the content to output.txt
  File.write(output_file, content)

  puts "Content successfully copied from #{input_file} to #{output_file}."
rescue Errno::ENOENT => e
  # Handle the case where the file does not exist
  puts "Error: #{e.message}"
rescue IOError => e
  # Handle other I/O related errors
  puts "Error: #{e.message}"
end

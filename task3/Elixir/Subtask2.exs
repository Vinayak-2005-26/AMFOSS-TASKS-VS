# Define a module with a function to perform file copy
defmodule FileCopy do
  def copy_contents(input_file, output_file) do
    case File.read(input_file) do
      {:ok, content} ->
        case File.write(output_file, content) do
          :ok -> IO.puts("Content successfully copied to #{output_file}.")
          {:error, reason} -> IO.puts("Failed to write to output file: #{reason}")
        end
      {:error, reason} -> IO.puts("Failed to read from input file: #{reason}")
    end
  end
end

# File names
input_file = "input.txt"
output_file = "output.txt"

# Perform the file copy
FileCopy.copy_contents(input_file, output_file)

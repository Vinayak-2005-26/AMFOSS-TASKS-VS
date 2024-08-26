defmodule DiamondFile do
  def print_diamond_to_file(n, output_file) when n > 0 do
    diamond_lines = generate_diamond(n)

    case File.write(output_file, diamond_lines) do
      :ok -> IO.puts("Diamond pattern successfully written to #{output_file}.")
      {:error, reason} -> IO.puts("Failed to write to output file: #{reason}")
    end
  end

  def print_diamond_to_file(_n, _output_file) do
    IO.puts("The number must be a positive integer.")
  end

  defp generate_diamond(n) do
    upper_part = for i <- 0..(n-1) do
      String.duplicate(" ", n - i - 1) <> String.duplicate("*", 2 * i + 1)
    end

    lower_part = for i <- (n-2)..0 do
      String.duplicate(" ", n - i - 1) <> String.duplicate("*", 2 * i + 1)
    end

    Enum.join(upper_part ++ lower_part, "\n") <> "\n"
  end
end

# Read the number from vsofficial.txt
case File.read("vsofficial.txt") do
  {:ok, content} ->
    case Integer.parse(String.trim(content)) do
      {n, ""} -> DiamondFile.print_diamond_to_file(n, "output.txt")
      _ -> IO.puts("Invalid number in input file.")
    end
  {:error, reason} -> IO.puts("Failed to read from input file: #{reason}")
end

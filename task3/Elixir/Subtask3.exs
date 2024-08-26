defmodule DiamondPattern do
  def print_diamond(n) when n > 0 do
    # Generate the upper part of the diamond
    for i <- 0..(n-1) do
      IO.puts(String.duplicate(" ", n - i - 1) <> String.duplicate("*", 2 * i + 1))
    end

    # Generate the lower part of the diamond
    for i <- (n-2)..0 do
      IO.puts(String.duplicate(" ", n - i - 1) <> String.duplicate("*", 2 * i + 1))
    end
  end

  def print_diamond(_n) do
    IO.puts("Please enter a positive integer.")
  end
end

# Prompt the user for input
IO.write("Enter the number of rows for the diamond: ")
n = IO.gets("") |> String.trim() |> String.to_integer()

# Print the diamond pattern
DiamondPattern.print_diamond(n)

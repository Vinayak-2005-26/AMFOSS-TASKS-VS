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

# Get the number from the user
print "Enter a number: "
n = gets.to_i

# Generate and print the diamond pattern
puts print_diamond(n)

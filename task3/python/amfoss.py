
def read_and_write():
    try:
        with open('/home/vinayak-s/amfoss/input.txt', 'r') as file:
            contents = file.read()
        with open('output.txt', 'w') as file:
            file.write(contents)
        print("String successfully written to output.txt")
    except FileNotFoundError:
        print("Input file not found")
    except Exception as e:
        print(f"An error occurred: {e}")

read_and_write()

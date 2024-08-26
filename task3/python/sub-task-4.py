with open('/home/vinayak-s/amfoss/vsofficial.txt', 'r') as file:
    n = int(file.read().strip())

def print_diamond(n):
    result = []
    for i in range(n):
        result.append(' ' * (n - i - 1) + '*' * (2 * i + 1))
    for i in range(n - 2, -1, -1):
        result.append(' ' * (n - i - 1) + '*' * (2 * i + 1))
    return '\n'.join(result)

with open('output.txt', 'w') as file:
    file.write(print_diamond(filey))

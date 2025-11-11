a = int(input())
b = int(input())
counter = 0

while a <= b:
    counter += 1
    a *= 3
    b *= 2

print(counter)
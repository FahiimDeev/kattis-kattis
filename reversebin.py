number = int(input())


binary_representation = bin(number)[2:].zfill(32)

reversed_binary = int(binary_representation[::-1], 2)

print(reversed_binary)

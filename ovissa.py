sentence = input()

count = {}

for char in sentence:
    if char.isalpha():
        char = char.lower()
        count[char] = count.get(char, 0) + 1

for letter, counts in count.items():
    print(f"{counts}")

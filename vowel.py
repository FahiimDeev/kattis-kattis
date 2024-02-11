def count_vowels(s):
    vowels = "aeiouAEIOU"
    count = 0

    for i in s:
        if i in vowels:
            count += 1

    return count 

gulu = input()

gg = count_vowels(gulu)

print(gg)

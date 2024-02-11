cases = int(input())

def get_initials(name):
    words = name.split()
    initials = ''.join(word[0] for word in words)
    return initials.upper()

for i in range(cases):
    name = input()
    initials = get_initials(name)
    print(initials)

def check(sent):
    for i in range(len(sent) - 1):
        if sent[i] == 's' and sent[i+1] == 's':
            return "hiss"
    return "no hiss"

sent = input()
final = check(sent)

print(final)
def mixingtotal(element, cost):
    for i in range(len(cost)):
        for j in range(i + 1, len(cost)):
            if cost[i] + cost[j] == element:
                return [i + 1, j + 1]

t = int(input())

moments = []
for _ in range(t):
    element = int(input())
    n = int(input())
    cost = list(map(int, input().split()))
    moments.append((element, cost))

for i in range(t):
    element, cost = moments[i]
    result = mixingtotal(element, cost)
    print(result[0], result[1])

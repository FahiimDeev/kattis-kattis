cases = int(input())
a = []
b = []
c = []
d = []

for i in range(cases):
    a_val, b_val, c_val, d_val = map(int, input().split())
    a.append(a_val)
    b.append(b_val)
    c.append(c_val)
    d.append(d_val)
for i in range(cases):
    print(a)
    print(b)
    print(c)
    print(d)
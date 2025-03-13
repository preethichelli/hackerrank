from itertools import combinations

data = input().strip().split()
string, size = data[0], int(data[1])

for i in range(1, size + 1):
    combs = sorted(combinations(sorted(string), i))
    for comb in combs:
        print(''.join(comb))

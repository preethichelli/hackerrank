from itertools import permutations

data = input().strip().split()
string, size = data[0], int(data[1])

perms = sorted(permutations(string, size))

for perm in perms:
    print(''.join(perm))

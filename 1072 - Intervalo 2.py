n = int(input())

x = []

n_in = 0
n_out = 0

for i in range(n):
    x.append(int(input()))

for i in x:
    if i >= 10 and i <= 20:
        n_in += 1
    else:
        n_out += 1

print('{0} in'.format(n_in))
print('{0} out'.format(n_out))
    
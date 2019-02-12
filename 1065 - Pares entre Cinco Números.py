cont = 0

for i in range(5):
    n = int(input())
    if n%2 == 0:
        cont += 1

print("{0} valores pares".format(cont))
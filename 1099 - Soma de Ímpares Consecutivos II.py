n = int(input())

for k in range(n) :

    x, y = map(int, input().split())

    soma = 0

    if x > y:
        aux = x
        x = y
        y = aux

    for i in range(x+1, y) :
        if i%2 == 1 :
            soma += i

    print(soma)

while True:
    x, y = map(int, input().split())

    soma = 0

    if x <= 0 or y <= 0 :
        break
    
    if x > y :
        aux = x
        x = y
        y = aux

    for i in range(x, y+1) :
        soma += i
        print(i, end=" ")

    print("Sum={:d}".format(soma))
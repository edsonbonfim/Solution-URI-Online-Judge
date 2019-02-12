notas = []

while True:

    while True :

        if len(notas) == 2:
            break

        n1 = float(input())

        if n1 >= 0 and n1 <= 10 :
            notas.append(n1)
        else :
            print("nota invalida")

    print("media = {:.2f}".format((notas[0]+notas[1])/2))

    notas = []

    x = 0

    while x != 1 and x != 2 :
        print("novo calculo (1-sim 2-nao)")
        x = int(input())

    if x == 2 :
        break
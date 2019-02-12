notas = []

while True :

    if len(notas) == 2:
        break

    n1 = float(input())

    if n1 >= 0 and n1 <= 10 :
        notas.append(n1)
    else :
        print("nota invalida")

print("media = {:.2f}".format((notas[0]+notas[1])/2))
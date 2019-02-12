inter = 0
gremio = 0
empate = 0

cont = 0

while True :

    cont += 1

    x, y = map(int, input().split())

    if x > y :
        inter += 1
    elif x == y :
        empate += 1
    else :
        gremio += 1

    print("Novo grenal (1-sim 2-nao)")

    k = int(input())

    if k == 2 :
        break

print("{0} grenais".format(cont))
print("Inter:{0}".format(inter))
print("Gremio:{0}".format(gremio))
print("Empates:{0}".format(empate))

if inter > gremio :
    print("Inter venceu mais")
elif gremio > inter:
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")
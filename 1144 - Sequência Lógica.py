n = int(input())
for i in range(1, n+1):
    quadrado = i*i
    cubo = quadrado*i
    print("{0} {1} {2}".format(i, quadrado, cubo))
    print("{0} {1} {2}".format(i, quadrado+1, cubo+1))

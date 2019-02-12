n = int(input())

par = []
impar = []

for i in range(n):
    
    k = int(input())

    if (k%2 == 0):
        par.append(k)
    else:
        impar.append(k)

par.sort()
impar.sort(reverse = True)

for i in par:
    print(i)

for i in impar:
    print(i)

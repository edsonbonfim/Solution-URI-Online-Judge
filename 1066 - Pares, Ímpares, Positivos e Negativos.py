par = 0
imp = 0
pos = 0
neg = 0

for i in range(5):
    n = int(input())
    if n%2 == 0:
        par += 1
    else:
        imp += 1
    if n > 0:
        pos += 1
    elif n < 0:
        neg += 1

print('{0} valor(es) par(es)'.format(par))
print('{0} valor(es) impar(es)'.format(imp))
print('{0} valor(es) positivo(s)'.format(pos))
print('{0} valor(es) negativo(s)'.format(neg))

alcool = 0
gasolina = 0
diesel = 0

while True:
    n = int(input())

    if n == 4:
        break

    elif n == 1:
        alcool += 1

    elif n == 2:
        gasolina += 1

    elif n == 3:
        diesel += 1

print("MUITO OBRIGADO")
print("Alcool: {0}\nGasolina: {1}\nDiesel: {2}".format(alcool, gasolina, diesel))
while True:
    try:
        n = int(input())

        res = soma = 0

        c = int(input())

        receita = []

        for i in range(n):
            receita.append(int(input()))
            soma += receita[i] - c
            if soma < 0:
                soma = 0
            res = soma if soma > res else res

        print(res)

    except:
        break
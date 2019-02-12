n = int(input())

for i in range(n):
    
    s = []
    k = 0

    entrada = input()

    for c in entrada:
        if c == '<':
            s.append(c)

        if len(s) > 0 and c == '>':
            s.pop()
            k += 1

    print(k)
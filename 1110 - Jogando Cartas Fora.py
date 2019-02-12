from collections import deque

while True:
    
    fila = deque()
    fila2 = deque()

    n = int(input())

    if n == 0:
        break

    for i in range(1, n+1):
        fila.append(i)
        
    while len(fila) >= 2:
        fila2.append(fila.popleft())
        fila.append(fila.popleft())

    print("Discarded cards: ", end="")

    while len(fila2) != 1:
        print("{0}, ".format(fila2.popleft()), end="");

    print(fila2.pop())
    print("Remaining card: {0}".format(fila.popleft()))
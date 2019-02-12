x, y = map(int, input().split())

for i in range(1, y+1, x):

    print(i, end="")

    for k in range(1, x):
        print(" {0}".format(i+k), end="")

    print("")

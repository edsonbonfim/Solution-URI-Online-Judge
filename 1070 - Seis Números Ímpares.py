x = int(input())

x = x+1 if x%2 == 0 else x

for i in range(0, 12, 2):
    print(x+i)
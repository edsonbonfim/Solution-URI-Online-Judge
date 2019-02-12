n = int(input())

for i in range(n):
    k = int(input())
    if k == 0:
        print('NULL')
    elif k%2 == 0:
        if k > 0:
            print('EVEN POSITIVE')
        else:
            print('EVEN NEGATIVE')
    else:
        if k > 0:
            print('ODD POSITIVE')
        else:
            print('ODD NEGATIVE')

while True:

    d, n = input().split()

    if d == "0" and n == "0":
        break

    resp = n.replace(d, '')

    if resp == '':
        print(0)
    else:
        print(int(resp))

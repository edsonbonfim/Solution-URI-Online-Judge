n = int(input())

leds = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

for i in range(n):
    
    v = input()

    count = 0

    for k in v:
        count += leds[int(k)]

    print("{0} leds".format(count))
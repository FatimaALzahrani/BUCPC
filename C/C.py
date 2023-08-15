T = int(input())

for _ in range(T):
    n = int(input())
    Ar = []
    tmp = 0
    key = 0
    count = 0
    k = n
    for j in range(n):
        Ar.append(int(input()))
    
    while True:
        for j in range(len(Ar)):
            if Ar[j] < tmp:
                tmp = Ar[j]
                key = j
        for j in range(key,len(Ar)):
            Ar.pop(key)
        count += 1
        k = len(Ar)
        if not Ar:
            break
    if count % 2 == 0:
        print("Hoor")
    else:
        print("Majd")

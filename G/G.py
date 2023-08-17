from collections import deque

while True:
    n = int(input())
    if n == 0:
        break
    
    q = deque(range(1, n + 1))
    
    print("Discarded cards:", end="")
    while len(q) > 1:
        print(" ", q[0], sep="", end="")
        q.popleft()
        p = q[0]
        q.popleft()
        if len(q) > 0:
            print(",", end="")
        q.append(p)
    
    print("\nRemaining card:", q[0])

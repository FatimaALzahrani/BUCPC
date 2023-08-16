n, m = map(int, input().split())
s = set()
    
for _ in range(n):
    data = list(map(int, input().split()))
    for i in range(1, len(data)):
        s.add(data[i])
            
print("Yes" if len(s) == m else "No")

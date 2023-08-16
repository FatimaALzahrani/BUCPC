def main():
    t = int(input())
    for _ in range(t):
        n, q = map(int, input().split())
        a = list(map(int, input().split()))
        v = [(a[i], i) for i in range(n)]
        Sparse = [[n for _ in range(20)] for _ in range(n + 1)]
        
        for j in range(20):
            Sparse[n][j] = n
        
        v.sort(reverse=True)
        s = {n}
        buf = []
        prev = -1
        
        for i in range(n):
            buf.append(v[i][1])
            it = next(iter(s))
            if it is not None:
                Sparse[v[i][1]][0] = it
            if i + 1 < n and v[i][0] != v[i + 1][0]:
                for j in buf:
                    s.add(j)
                buf.clear()
        
        for j in range(1, 20):
            for i in range(n):
                Sparse[i][j] = Sparse[Sparse[i][j - 1]][j - 1]
        
        for _ in range(q):
            p, x = map(int, input().split())
            p -= 1
            for i in range(19, -1, -1):
                if x & (1 << i):
                    p = Sparse[p][i]
            print(Sparse[p][0])

if __name__ == "__main__":
    main()

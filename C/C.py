s, k = input().split()
k = int(k)
re = '0'

for i in range(len(s)):
    count = 0
    for j in range(len(s)):
        if s[i] == s[j]:
            count += 1
    if count == k:
        re = s[i]
        break

if re == '0':
    print("NO")
else:
    print("YES " + re)

s = input()
n = len(s)
mp = {}
    
for i in range(n):
    substr = s[i:i+4]
    if substr in mp:
        mp[substr] += 1
    else:
        mp[substr] = 1
    
sum = 0
for value in mp.values():
    if value >= 3:
        sum += 1
print(sum)

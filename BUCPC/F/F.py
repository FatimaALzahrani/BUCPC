T = int(input())
re = 0
count = 0
    
for i in range(2):
    sum = 0
    for j in range(T):
        n = int(input())
        sum += n
    if i == 0:
        re = sum
        count += 1
    elif re == sum:
        count += 1
    
if count == 2:
    print("fair")
else:
    print("not fair")
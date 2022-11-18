m = int(input())
n = int(input())
lst = []
for i in range(n):
    mul = m*n
    if(mul%10==0):
        lst.append(mul)
    while len(lst) > 1:
        for j in range(len(lst)):
            for i in lst:
                if(lst[i]%10==0):
                        lst[i] = lst/10
                else:
                        lst.remove(lst[i])
    if(len(lst)>1):
        ans = max(lst)
    elif(len(lst)==0):
        ans = 0

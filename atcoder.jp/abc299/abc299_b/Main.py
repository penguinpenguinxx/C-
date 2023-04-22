N,T=map(int,input().split())


ListC=list(map(int,input().split()))

ListR=list(map(int,input().split()))

numT=ListC.count(T)

if numT==0:
    T=ListC[0]

indices = [i for i, x in enumerate(ListC) if x == T]


#print(indices)
max=0
for j in indices:
    if max<ListR[j]:
        max=ListR[j]

for k in indices:
    if max==ListR[k]:
        exit(print(k+1))
N=int(input())

S=input()

j=0
num=0
ch=0
ans=-1
for i in range(len(S)):
    while j<N:
        if S[j]=="o":
            num+=1
            if num>ans:
                ans=num
        if S[j]=="-":
            ch=1
            break
        j+=1
    if i==j:
        j+=1
    num=0

if ch==1:
    print(ans)
else:
    print(-1)

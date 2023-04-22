N=int(input())
l,r=1,N
while l!=r:
    mid=(l+r+1)//2
    print("?",mid,flush=True)
    s=int(input())
    if s==1:
        r=mid-1
    else:
        l=mid
if l==1:
    exit(print("!",l,flush=True))
print("?",l-1,flush=True)
one=int(input())
print("?",l,flush=True)
two=int(input())
if one != two:
    exit(print("!",l-1,flush=True))
else:
    exit(print("!",l,flush=True))
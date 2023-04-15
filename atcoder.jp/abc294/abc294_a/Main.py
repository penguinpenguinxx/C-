N=int(input())

list=list(map(int,input().split()))
List=[]
for k in list:
  if k%2==0:
    List.append(k)
    
print(*List,sep=" ")
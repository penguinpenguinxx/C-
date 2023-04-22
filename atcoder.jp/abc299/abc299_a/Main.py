N=int(input())
S=input()
num=0
for i in range(len(S)):
    if S[i]=="|":
        num+=1
    if S[i]=="*" and num==1:
        exit(print("in"))
print("out")
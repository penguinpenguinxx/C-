N=int(input())

s=input()
a=0
for j in s:
    if j=="o":
        a=1
    if j=="x":
        exit(print("No"))
if a==1:
    print("Yes")
else:
    print("No")
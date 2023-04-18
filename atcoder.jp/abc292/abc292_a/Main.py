s=input()
S=[]
for i in s:
  S.append(chr(ord(i)-32))
  
print(*S ,sep="")
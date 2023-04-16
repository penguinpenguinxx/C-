s=input()
new=""
for i in range(len(s)):
  if i%2==0:
    w=s[i]
  else:
    new+=s[i]+w
    
print(new)